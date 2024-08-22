// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEMERGECONTENTVIEWCONTROLLER_H
#define PXPEOPLEMERGECONTENTVIEWCONTROLLER_H

@class UIViewController;
@protocol PXPerson;



@interface PXPeopleMergeContentViewController : UIViewController

@property (retain, nonatomic) NSObject<PXPerson> *draggedPerson; // ivar: _draggedPerson
@property (retain, nonatomic) NSObject<PXPerson> *targetPerson; // ivar: _targetPerson


-(id)initWithTargetPerson:(id)arg0 draggedPerson:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)viewDidLoad;


@end


#endif