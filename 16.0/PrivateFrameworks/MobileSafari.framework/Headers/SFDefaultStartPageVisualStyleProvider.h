// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFDEFAULTSTARTPAGEVISUALSTYLEPROVIDER_H
#define SFDEFAULTSTARTPAGEVISUALSTYLEPROVIDER_H

@class NSString, UIFont;
@protocol SFStartPageVisualStyleProviding;

#import <Foundation/Foundation.h>


@interface SFDefaultStartPageVisualStyleProvider : NSObject <SFStartPageVisualStyleProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultRowSpacing;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat sectionHeaderBottomGap;
@property (readonly, nonatomic) UIFont *sectionHeaderLargeTitleFont;
@property (readonly) Class superclass;


+(id)sharedProvider;
-(CGFloat)rowSpacingForSectionItemType:(NSInteger)arg0 containerSize:(struct CGSize )arg1 ;
-(CGFloat)siteIconSizeForContainerSize:(struct CGSize )arg0 ;
-(NSInteger)numberOfColumnsForSectionItemType:(NSInteger)arg0 sectionWidth:(CGFloat)arg1 traitCollection:(id)arg2 ;
-(id)overrideTraitCollectionFromProposedTraits:(id)arg0 isShowingWallpaper:(BOOL)arg1 ;
-(struct NSDirectionalEdgeInsets )sectionContentInsetsWithViewLayoutMargins:(struct NSDirectionalEdgeInsets )arg0 ;
-(struct UIEdgeInsets )collectionViewContentInsetsWithNavigationBarPosition:(NSInteger)arg0 ;


@end


#endif