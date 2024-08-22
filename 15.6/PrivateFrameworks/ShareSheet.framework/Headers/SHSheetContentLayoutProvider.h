// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEETCONTENTLAYOUTPROVIDER_H
#define SHSHEETCONTENTLAYOUTPROVIDER_H

@protocol SHSheetContentLayoutDelegate;

#import <Foundation/Foundation.h>

#import "SHSheetContentLayoutSpec.h"

@interface SHSheetContentLayoutProvider : NSObject

@property (weak, nonatomic) NSObject<SHSheetContentLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) SHSheetContentLayoutSpec *layoutSpec; // ivar: _layoutSpec


+(id)_createFooterSupplementaryItemWithHeightDimension:(id)arg0 ;
+(id)_createHeaderSupplementaryItemWithHeightDimension:(id)arg0 ;
-(NSInteger)_sectionForContext:(id)arg0 ;
-(id)_createHorizontalLayoutSectionWithContext:(id)arg0 iconWidth:(CGFloat)arg1 ;
-(id)_layoutForActionsSectionWithContext:(id)arg0 ;
-(id)_layoutForAppsSectionWithContext:(id)arg0 ;
-(id)_layoutForCustomViewSectionWithContext:(id)arg0 ;
-(id)_layoutForHeroActionsSectionWithContext:(id)arg0 ;
-(id)_layoutForPeopleSectionWithContext:(id)arg0 ;
-(id)initWithLayoutSpec:(id)arg0 ;
-(id)layoutSectionForContext:(id)arg0 ;


@end


#endif