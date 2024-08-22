// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KCJOININGMESSAGE_H
#define KCJOININGMESSAGE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface KCJoiningMessage : NSObject

@property (readonly) NSData *der; // ivar: _der
@property (readonly) NSData *firstData; // ivar: _firstData
@property (readonly) NSData *secondData; // ivar: _secondData
@property (readonly) int type; // ivar: _type


+(NSUInteger)encodedSizeType:(int)arg0 data:(id)arg1 payload:(id)arg2 error:(*id)arg3 ;
+(id)encodeToDERType:(int)arg0 data:(id)arg1 payload:(id)arg2 error:(*id)arg3 ;
+(id)messageWithDER:(id)arg0 error:(*id)arg1 ;
+(id)messageWithType:(int)arg0 data:(id)arg1 error:(*id)arg2 ;
+(id)messageWithType:(int)arg0 data:(id)arg1 payload:(id)arg2 error:(*id)arg3 ;
+(id)messageWithType:(int)arg0 data:(id)arg1 secondData:(id)arg2 error:(*id)arg3 ;
-(BOOL)inflatePartsOfEncoding:(*id)arg0 ;
-(id)initWithDER:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(int)arg0 data:(id)arg1 payload:(id)arg2 error:(*id)arg3 ;


@end


#endif