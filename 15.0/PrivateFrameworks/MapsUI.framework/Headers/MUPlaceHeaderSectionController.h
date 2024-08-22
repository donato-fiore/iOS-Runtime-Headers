// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEHEADERSECTIONCONTROLLER_H
#define MUPLACEHEADERSECTIONCONTROLLER_H

@class NSString;
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
@property (readonly) Class superclass;


+(CGFloat)minimalModeHeight;
-(id)draggableContent;
-(id)initWithPlaceItem:(id)arg0 configuration:(id)arg1 ;
-(id)sectionView;
-(int)analyticsModuleType;
-(void)_notifyDidTapParentMapItem:(id)arg0 ;
-(void)_setupHeaderView;
-(void)headerView:(id)arg0 didSelectEnclosingMapItem:(id)arg1 ;
-(void)headerView:(id)arg0 didSelectEnclosingMapItemIdentifier:(id)arg1 ;
-(void)hideTitle:(BOOL)arg0 ;


@end


#endif