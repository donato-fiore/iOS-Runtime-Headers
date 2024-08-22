// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSSHKEYDECODER_H
#define WFSSHKEYDECODER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface WFSSHKeyDecoder : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger offset; // ivar: _offset


-(char *)currentPointer;
-(id)decodeDataWithLength:(NSUInteger)arg0 ;
-(id)decodeDataWithPrecedingLength;
-(id)decodeStringWithLength:(NSUInteger)arg0 ;
-(id)decodeStringWithPrecedingLength;
-(id)initWithData:(id)arg0 ;
-(unsigned int)decodeInteger;
-(void)advanceBy:(NSUInteger)arg0 ;


@end


#endif