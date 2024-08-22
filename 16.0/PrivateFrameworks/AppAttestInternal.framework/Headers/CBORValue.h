// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBORVALUE_H
#define CBORVALUE_H


#import <Foundation/Foundation.h>


@interface CBORValue : NSObject

@property (readonly, nonatomic) int fieldType;
@property (readonly, nonatomic) unsigned char fieldValue;


-(NSUInteger)getNumUintBytes:(NSUInteger)arg0 ;
-(void)encodeStartItems:(NSUInteger)arg0 output:(id)arg1 ;
-(void)setAdditionalInformation:(unsigned char)arg0 item2:(unsigned char)arg1 output:(id)arg2 ;
-(void)setUint:(unsigned char)arg0 item2:(NSUInteger)arg1 output:(id)arg2 ;
-(void)write:(id)arg0 ;


@end


#endif