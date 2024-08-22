// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUCONTENTVIEWCONTROLLER_H
#define MUCONTENTVIEWCONTROLLER_H

@class UIViewController, AKController;
@protocol MUContentViewControllerDelegate;



@interface MUContentViewController : UIViewController

@property (retain) AKController *annotationController; // ivar: _annotationController
@property (weak) NSObject<MUContentViewControllerDelegate> *delegate; // ivar: _delegate


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 delegate:(id)arg2 ;


@end


#endif