// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI29TVFILTEROPTIONSVIEWCONTROLLER_H
#define _TTC9SEYMOURUI29TVFILTEROPTIONSVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _TtC9SeymourUI29TVFilterOptionsViewController : UIViewController {
    ? dataProvider;
    ? layout;
    ? visibility;
    ? dependencies;
    ? lastFocusedIndexPath;
    ? settlingTimer;
    ? timerProvider;
    ? metricPublishingDelegate;
    ? titleLabel;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)menuButtonTapped;
-(void)viewDidLoad;


@end


#endif