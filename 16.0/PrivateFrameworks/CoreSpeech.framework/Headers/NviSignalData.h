// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NVISIGNALDATA_H
#define NVISIGNALDATA_H

@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface NviSignalData : NSObject <NSCoding>



@property (nonatomic) NSUInteger sigGenTs; // ivar: _sigGenTs
@property (nonatomic) NSUInteger sigType; // ivar: _sigType


+(id)headerString;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignalType:(NSUInteger)arg0 timestamp:(NSUInteger)arg1 ;
-(id)stringForLogging;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif