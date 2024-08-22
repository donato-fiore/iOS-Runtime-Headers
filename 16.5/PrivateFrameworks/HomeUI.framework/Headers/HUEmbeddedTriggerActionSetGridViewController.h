// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUEMBEDDEDTRIGGERACTIONSETGRIDVIEWCONTROLLER_H
#define HUEMBEDDEDTRIGGERACTIONSETGRIDVIEWCONTROLLER_H

@class TtC6HomeUI51EmbeddedActionSetContainerSummaryGridViewController;
@protocol HUTriggerSummaryActionGridViewControllerProtocol, HUEmbeddedTriggerActionSetGridViewControllerDelegate;



@interface HUEmbeddedTriggerActionSetGridViewController : TtC6HomeUI51EmbeddedActionSetContainerSummaryGridViewController <HUTriggerSummaryActionGridViewControllerProtocol>



@property (nonatomic, weak) NSObject<HUEmbeddedTriggerActionSetGridViewControllerDelegate> *delegate; // ivar: delegate
@property (nonatomic, retain) id *triggerBuilder; // ivar: triggerBuilder


-(id)initWithTriggerBuilder:(id)arg0 ;
-(void)reloadActions;
-(void)sceneEditor:(id)arg0 removeActionSetBuilderFromTrigger:(id)arg1 ;


@end


#endif