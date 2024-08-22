// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7FOCUSUI26ACTIVITYEDITVIEWCONTROLLER_H
#define _TTC7FOCUSUI26ACTIVITYEDITVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC7FocusUI26ActivityEditViewController : UIViewController {
    ? activityDescription;
    ? willDisappearBlock;
}


@property (nonatomic, readonly) CGFloat visibleHeight; // ivar: visibleHeight
@property (nonatomic, copy) id *willDisappearBlock;


-(id)initWithActivityDescription:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleTap:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif