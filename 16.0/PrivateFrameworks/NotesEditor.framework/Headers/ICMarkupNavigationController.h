// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMARKUPNAVIGATIONCONTROLLER_H
#define ICMARKUPNAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol ICMarkupDismissalDelegate;



@interface ICMarkupNavigationController : UINavigationController

@property (weak, nonatomic) NSObject<ICMarkupDismissalDelegate> *markupDelegate; // ivar: markupDelegate


-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif