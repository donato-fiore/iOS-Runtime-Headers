// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCONTROLPANELCONTROLLER_H
#define HUCONTROLPANELCONTROLLER_H

@class NSSet, NSString, NSMutableDictionary;
@protocol HUControlViewDelegate, HUControlPanelControllerDelegate;

#import <Foundation/Foundation.h>


@interface HUControlPanelController : NSObject <HUControlViewDelegate>



@property (readonly, nonatomic) NSSet *allItems; // ivar: _allItems
@property (readonly, nonatomic) NSSet *configurations; // ivar: _configurations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HUControlPanelControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *interactionStateByControlID; // ivar: _interactionStateByControlID
@property (readonly) Class superclass;


-(BOOL)shouldDisplayItem:(id)arg0 ;
-(BOOL)shouldShowSectionFooterForItem:(id)arg0 ;
-(BOOL)shouldShowSectionTitleForItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(id)_configurationForItem:(id)arg0 ;
-(id)_controlItemForControlView:(id)arg0 ;
-(id)_controlPanelItemForControlView:(id)arg0 ;
-(id)_createConfigurations;
-(id)_createWriteThrottleForControlItem:(id)arg0 controlPanelItem:(id)arg1 ;
-(id)_valueTransformerForControlItem:(id)arg0 controlPanelItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)sectionFooterForItem:(id)arg0 forSourceItem:(id)arg1 ;
-(id)sectionTitleForItem:(id)arg0 forSourceItem:(id)arg1 ;
-(void)_updateStateForControlView:(id)arg0 controlPanelItem:(id)arg1 ;
-(void)_updateWriteStateForControlItem:(id)arg0 controlPanelItem:(id)arg1 ;
-(void)_updateWriteStateForControlView:(id)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)controlView:(id)arg0 valueDidChange:(id)arg1 ;
-(void)controlViewDidBeginUserInteraction:(id)arg0 ;
-(void)controlViewDidEndUserInteraction:(id)arg0 ;
-(void)removeItem:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif