// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC22_GROUPACTIVITIES_UIKIT30GROUPACTIVITYSHARINGCONTROLLER_H
#define _TTC22_GROUPACTIVITIES_UIKIT30GROUPACTIVITYSHARINGCONTROLLER_H

@class UIViewController, NSString;



@interface _TtC22_GroupActivities_UIKit30GroupActivitySharingController : UIViewController {
    ? controller;
    ? activity;
    ? _resultValue;
}


@property (nonatomic) NSInteger modalPresentationStyle;
@property (nonatomic, copy) NSString *shareSheetSessionID;
@property (nonatomic) BOOL startStagedActivity;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemProvider:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif