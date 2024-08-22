// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTAKESCREENSHOTACTION_H
#define WFTAKESCREENSHOTACTION_H

@class WFAction, FBSDisplayLayoutMonitor;



@interface WFTakeScreenshotAction : WFAction

@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor; // ivar: _displayLayoutMonitor


+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)parameterSummary;
-(id)screenshotDisplay:(id)arg0 error:(*id)arg1 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)cancel;
-(void)notifyVisibleScenesOfScreenshot:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)takeScreenshot;


@end


#endif