// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUEMBEDDEDTRIGGERACTIONGRIDVIEWCONTROLLER_H
#define HUEMBEDDEDTRIGGERACTIONGRIDVIEWCONTROLLER_H

@class TtC6HomeUI32EmbeddedActionGridViewController;
@protocol HUTriggerSummaryActionGridViewControllerProtocol, HUEmbeddedTriggerActionGridViewControllerDelegate;



@interface HUEmbeddedTriggerActionGridViewController : TtC6HomeUI32EmbeddedActionGridViewController <HUTriggerSummaryActionGridViewControllerProtocol>



@property (nonatomic, weak) NSObject<HUEmbeddedTriggerActionGridViewControllerDelegate> *triggerActionGridDelegate; // ivar: triggerActionGridDelegate
@property (nonatomic, retain) id *triggerBuilder; // ivar: triggerBuilder


-(id)initWithTriggerBuilder:(id)arg0 ;
-(void)reloadActions;


@end


#endif