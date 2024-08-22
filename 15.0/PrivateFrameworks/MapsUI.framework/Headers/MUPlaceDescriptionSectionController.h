// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEDESCRIPTIONSECTIONCONTROLLER_H
#define MUPLACEDESCRIPTIONSECTIONCONTROLLER_H

@protocol MUPlaceDescriptionSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceDescriptionConfiguration.h"
#import "MUExpandableBlurbView.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceFooterAttributionController.h"

@interface MUPlaceDescriptionSectionController : MUPlaceSectionController {
    MUPlaceDescriptionConfiguration *_configuration;
    MUExpandableBlurbView *_blurbView;
    MUPlaceSectionView *_sectionView;
    MUPlaceFooterAttributionController *_footerAttributionController;
}


@property (weak, nonatomic) NSObject<MUPlaceDescriptionSectionControllerDelegate> *actionDelegate; // ivar: _actionDelegate


-(id)infoCardChildPossibleActions;
-(id)initWithMapItem:(id)arg0 configuration:(id)arg1 ;
-(id)sectionFooterViewModel;
-(id)sectionView;
-(int)analyticsModuleType;
-(void)_attributionTapped;
-(void)_setupTextBlurb;


@end


#endif