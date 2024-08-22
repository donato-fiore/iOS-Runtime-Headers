// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSIGNATUREBUFFER_H
#define SHSIGNATUREBUFFER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SHSignatureBuffer : NSObject

@property (nonatomic) CGFloat bufferMaxSize; // ivar: _bufferMaxSize
@property (readonly, nonatomic) CGFloat currentSignatureDuration;
@property (nonatomic) CGFloat maximumSignatureDuration; // ivar: _maximumSignatureDuration
@property (nonatomic) CGFloat minimumSignatureDuration; // ivar: _minimumSignatureDuration
@property (readonly, nonatomic) NSMutableArray *slots; // ivar: _slots


-(CGFloat)duration;
-(id)generateCurrentSignature;
-(id)initWithMinimumSignatureDuration:(CGFloat)arg0 maximumSignatureDuration:(CGFloat)arg1 bufferDuration:(CGFloat)arg2 ;
-(void)discardSignatureWithID:(id)arg0 ;
-(void)flow:(id)arg0 time:(id)arg1 ;
-(void)reset;


@end


#endif