// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIPREFSROOTCONTROLLER_H
#define PSUIPREFSROOTCONTROLLER_H

@class PSRootController;


#import "PSUIPrefsListController.h"

@interface PSUIPrefsRootController : PSRootController {
    PSUIPrefsListController *_rootListController;
}




-(id)initWithTitle:(id)arg0 identifier:(id)arg1 ;
-(id)rootListController;
-(void)dealloc;
-(void)loadView;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)setupControllerForToolbar:(id)arg0 ;


@end


#endif