// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEHEADERSECTIONCONTROLLER_H
#define MUPLACEHEADERSECTIONCONTROLLER_H

@class NSString, UILayoutGuide;
@protocol MUPlaceHeaderViewDelegate, _MKPlaceItem, MUPlaceHeaderSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceHeaderView.h"
#import "MUPlaceHeaderSectionControllerConfiguration.h"

@interface MUPlaceHeaderSectionController : MUPlaceSectionController <MUPlaceHeaderViewDelegate>

 {
    MUPlaceHeaderView *_headerView;
    id<_MKPlaceItem> *_placeItem;
    MUPlaceHeaderSectionControllerConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MUPlaceHeaderSectionControllerDelegate> *headerDelegate; // ivar: _headerDelegate
@property (readonly, nonatomic) UILayoutGuide *headerViewTitleLabelToTopLayoutGuide;
@property (readonly, nonatomic) BOOL shouldBlurChromeHeaderButtons;
@property (readonly) Class superclass;


+(CGFloat)minimalModeHeight;
-(BOOL)isImpressionable;
-(CGFloat)verifiedBusinessHeaderHeight;
-(id)draggableContent;
-(id)initWithPlaceItem:(id)arg0 configuration:(id)arg1 ;
-(id)sectionView;
-(int)analyticsModuleType;
-(void)_notifyDidTapParentMapItem:(id)arg0 ;
-(void)_populateRevealedAnalyticsModule:(id)arg0 ;
-(void)_setupHeaderView;
-(void)headerView:(id)arg0 didSelectEnclosingMapItem:(id)arg1 ;
-(void)headerView:(id)arg0 didSelectEnclosingMapItemIdentifier:(id)arg1 ;
-(void)headerView:(id)arg0 didSelectShareWithPresentationOptions:(id)arg1 ;
-(void)hideTitle:(BOOL)arg0 ;
-(void)setCardExpansionProgress:(CGFloat)arg0 ;
-(void)verifiedBusinessHeaderScrollPositionChanged:(CGFloat)arg0 ;


@end


#endif