// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFSITEICON_H
#define _SFSITEICON_H


#import <Foundation/Foundation.h>


@interface _SFSiteIcon : NSObject



+(CGFloat)cornerRadius;
+(CGFloat)fontPointSizeForIconSize:(NSInteger)arg0 ;
+(NSInteger)_defaultIconSize;
+(id)defaultGlyph;
+(id)defaultIconKeyColor;
+(id)precompositedDefaultIcon;
+(struct CGSize )defaultSize;
+(struct CGSize )minimumAcceptableSizeForDownloadedIcon;
+(struct CGSize )sizeForIconSize:(NSInteger)arg0 ;


@end


#endif