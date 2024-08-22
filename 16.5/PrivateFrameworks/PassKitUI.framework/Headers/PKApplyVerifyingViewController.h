// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYVERIFYINGVIEWCONTROLLER_H
#define PKAPPLYVERIFYINGVIEWCONTROLLER_H

@class NSString, NSSet;


#import "PKApplyCollectionViewController.h"

@interface PKApplyVerifyingViewController : PKApplyCollectionViewController {
    NSString *_actionIdentifierToSubmit;
    NSSet *_termsIdentifiersToSubmit;
    CGFloat _minimumDelayNanoSeconds;
}




-(BOOL)shouldDisplayErrorOnWithdraw;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 applyPage:(id)arg3 actionIdentifierToSubmit:(id)arg4 termsIdentifiersToSubmit:(id)arg5 ;
-(id)pageTag;
-(void)_updateSubtitleWithAltTextIfNecessary;
-(void)viewDidLoad;


@end


#endif