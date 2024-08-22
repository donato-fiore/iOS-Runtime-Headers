// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APWUTIL_H
#define APWUTIL_H


#import <Foundation/Foundation.h>


@interface APWUtil : NSObject



+(BOOL)isInternalBuild;
+(BOOL)traitCollectionNeedsAXSize:(id)arg0 ;
+(CGFloat)rowHeight;
+(id)_imageDescriptorForHomeScreenIcons;
+(id)hyphenatableStringForString:(id)arg0 ;
+(id)iconForBundleIdentifier:(id)arg0 ;
+(id)preferredTraitCollectionForTraitCollection:(id)arg0 ;
+(struct CGSize )visibleSizeForHomeScreenIcons;
+(void)_updateRowHeightForContentSizeCategory;


@end


#endif