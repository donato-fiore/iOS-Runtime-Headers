// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HACCMENUMODULEVIEWCONTROLLER_H
#define HACCMENUMODULEVIEWCONTROLLER_H

@class CCUIMenuModuleViewController;
@protocol HACCContentModuleDelegate;



@interface HACCMenuModuleViewController : CCUIMenuModuleViewController

@property (weak, nonatomic) NSObject<HACCContentModuleDelegate> *delegate; // ivar: _delegate


-(BOOL)_canShowWhileLocked;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif