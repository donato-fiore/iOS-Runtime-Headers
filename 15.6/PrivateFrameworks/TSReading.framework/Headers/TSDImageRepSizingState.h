// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDIMAGEREPSIZINGSTATE_H
#define TSDIMAGEREPSIZINGSTATE_H


#import <Foundation/Foundation.h>

#import "TSDImageProvider.h"

@interface TSDImageRepSizingState : NSObject

@property (nonatomic) CGSize desiredSize; // ivar: mDesiredSize
@property (readonly, nonatomic) *CGPath maskPath; // ivar: mMaskPath
@property (retain, nonatomic) TSDImageProvider *provider; // ivar: mProvider
@property (nonatomic) *CGImage sizedImage; // ivar: mSizedImage
@property (readonly, nonatomic) BOOL sizedImageHasMask;
@property (nonatomic) BOOL sizedImageIncludesAdjustments; // ivar: mIncludesAdjustments
@property (nonatomic) NSInteger sizedImageOrientation; // ivar: mSizedImageOrientation
@property (nonatomic) int status; // ivar: mStatus
@property (readonly, nonatomic) BOOL wideGamut; // ivar: mWideGamutCanvas


-(id)initWithDesiredSize:(struct CGSize )arg0 provider:(id)arg1 maskPath:(struct CGPath *)arg2 wideGamutCanvas:(BOOL)arg3 ;
-(void)dealloc;
-(void)generateSizedImage;


@end


#endif