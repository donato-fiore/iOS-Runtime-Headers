// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUITTRNAVIGATIONCONTROLLER_H
#define AFUITTRNAVIGATIONCONTROLLER_H

@class UINavigationController, NSArray;



@interface AFUITTRNavigationController : UINavigationController {
    NSArray *_reports;
    id *_completion;
}




-(id)initWithReports:(id)arg0 completion:(id)arg1 ;
-(void)presentUtteranceSelectionController;
-(void)viewDidLoad;


@end


#endif