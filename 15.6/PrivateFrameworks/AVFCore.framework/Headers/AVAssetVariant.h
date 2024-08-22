// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETVARIANT_H
#define AVASSETVARIANT_H

@class FigAlternateObjC;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AVAssetVariantVideoAttributes.h"
#import "AVAssetVariantAudioAttributes.h"

@interface AVAssetVariant : NSObject <NSSecureCoding>

 {
    FigAlternateObjC *_figAlternateObjC;
    AVAssetVariantVideoAttributes *_videoAttributes;
    AVAssetVariantAudioAttributes *_audioAttributes;
    *OpaqueFigSimpleMutex _mutex;
}


@property (readonly, nonatomic) AVAssetVariantAudioAttributes *audioAttributes;
@property (readonly, nonatomic) CGFloat averageBitRate;
@property (readonly, nonatomic) CGFloat peakBitRate;
@property (readonly, nonatomic) AVAssetVariantVideoAttributes *videoAttributes;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFigAlternate:(struct OpaqueFigAlternate *)arg0 ;
-(struct OpaqueFigAlternate *)_figAlternate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif