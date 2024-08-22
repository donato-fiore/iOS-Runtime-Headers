// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLESOCIALGROUPVIEWGENERATOR_H
#define PXPEOPLESOCIALGROUPVIEWGENERATOR_H


#import <Foundation/Foundation.h>


@interface PXPeopleSocialGroupViewGenerator : NSObject



+(NSUInteger)_numberOfFacesToShowForSocialGroup:(id)arg0 ;
+(id)_faceCropFetchOptionsForSocialGroup:(id)arg0 withSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 ;
+(id)generateViewForSocialGroup:(id)arg0 withSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 ;
+(void)_layoutAvatarViews:(id)arg0 inFrame:(struct CGRect )arg1 ;
+(void)prefetchForSocialGroup:(id)arg0 withSize:(struct CGSize )arg1 displayScale:(CGFloat)arg2 ;
+(void)resizeThumbnailSizeForSocialGroupView:(id)arg0 withSize:(struct CGSize )arg1 ;


@end


#endif