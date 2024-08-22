// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDFRAMESPEC_H
#define TSDFRAMESPEC_H

@class NSBundle, NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSDFrameSpec : NSObject <NSCopying>

 {
    NSBundle *mBundle;
    CGFloat mLeftInset;
    CGFloat mRightInset;
    CGFloat mTopInset;
    CGFloat mBottomInset;
    CGPoint mAdornmentPosition;
    CGFloat mMinimumAssetScale;
    int mTilingMode;
    BOOL mHasImages;
    BOOL mHasMask;
    BOOL mHasAdornment;
    NSMutableDictionary *mProvidersByKey;
    BOOL mLoadedImageMetrics;
    CGFloat mLeftWidth;
    CGFloat mRightWidth;
    CGFloat mTopHeight;
    CGFloat mBottomHeight;
    CGSize mAdornmentSize;
    int mInterest;
}


@property (readonly, nonatomic) BOOL displayInPicker; // ivar: mDisplayInPicker
@property (readonly, copy, nonatomic) NSString *frameName; // ivar: mFrameName


+(id)frameSpecWithName:(id)arg0 ;
+(id)frameSpecs;
+(id)p_imageKeys;
-(BOOL)i_hasAdornment;
-(BOOL)i_hasImages;
-(BOOL)i_hasMask;
-(CGFloat)i_bottomHeight;
-(CGFloat)i_bottomInset;
-(CGFloat)i_leftInset;
-(CGFloat)i_leftWidth;
-(CGFloat)i_minimumAssetScale;
-(CGFloat)i_rightInset;
-(CGFloat)i_rightWidth;
-(CGFloat)i_topHeight;
-(CGFloat)i_topInset;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)i_providerForIndex:(int)arg0 mask:(BOOL)arg1 ;
-(id)initWithBundle:(id)arg0 isVolatile:(BOOL)arg1 ;
-(id)p_imageDataForKey:(id)arg0 ;
-(id)p_infoDictionary;
-(int)i_tilingMode;
-(struct CGPoint )i_adornmentPosition;
-(struct CGSize )i_adornmentSize;
-(void)dealloc;
-(void)i_addInterestInProviders;
-(void)i_removeInterestInProviders;
-(void)p_loadImageMetrics;


@end


#endif