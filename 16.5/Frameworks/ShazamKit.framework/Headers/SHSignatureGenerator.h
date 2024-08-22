// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSIGNATUREGENERATOR_H
#define SHSIGNATUREGENERATOR_H


#import <Foundation/Foundation.h>

#import "SHMutableSignature.h"

@interface SHSignatureGenerator : NSObject

@property (retain, nonatomic) SHMutableSignature *mutableSignature; // ivar: _mutableSignature


+(void)generateSignatureFromAsset:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)appendBuffer:(id)arg0 atTime:(id)arg1 error:(*id)arg2 ;
-(CGFloat)duration;
-(CGFloat)maximumDuration;
-(id)init;
-(id)initSignatureRingBufferWithDuration:(CGFloat)arg0 ;
-(id)initWithMaximumSignatureDuration:(CGFloat)arg0 ;
-(id)signature;


@end


#endif