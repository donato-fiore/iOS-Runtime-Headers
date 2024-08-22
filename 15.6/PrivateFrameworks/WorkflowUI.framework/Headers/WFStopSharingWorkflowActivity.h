// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSTOPSHARINGWORKFLOWACTIVITY_H
#define WFSTOPSHARINGWORKFLOWACTIVITY_H

@class UIActivity, WFSharedShortcut, WFCloudKitTask;



@interface WFStopSharingWorkflowActivity : UIActivity

@property (retain, nonatomic) WFSharedShortcut *shortcut; // ivar: _shortcut
@property (retain, nonatomic) WFCloudKitTask *unshareTask; // ivar: _unshareTask


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif