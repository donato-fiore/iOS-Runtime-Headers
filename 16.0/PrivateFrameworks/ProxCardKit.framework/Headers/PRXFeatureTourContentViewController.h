// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXFEATURETOURCONTENTVIEWCONTROLLER_H
#define PRXFEATURETOURCONTENTVIEWCONTROLLER_H

@class NSString;


#import "PRXCardContentViewController.h"
#import "PRXLabel.h"

@interface PRXFeatureTourContentViewController : PRXCardContentViewController

@property (copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (retain, nonatomic) PRXLabel *bodyView; // ivar: _bodyView
@property (nonatomic) BOOL shouldCenterAlignText; // ivar: _shouldCenterAlignText
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) PRXLabel *titleView; // ivar: _titleView


-(void)viewDidLoad;


@end


#endif