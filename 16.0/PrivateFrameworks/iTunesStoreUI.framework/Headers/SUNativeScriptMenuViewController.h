// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUNATIVESCRIPTMENUVIEWCONTROLLER_H
#define SUNATIVESCRIPTMENUVIEWCONTROLLER_H

@class NSArray;


#import "SUMenuViewController.h"
#import "SUScriptFunction.h"

@interface SUNativeScriptMenuViewController : SUMenuViewController

@property (retain, nonatomic) SUScriptFunction *action; // ivar: _action
@property (retain, nonatomic) NSArray *menuItems; // ivar: _menuItems


-(BOOL)isMenuItemEnabledAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfMenuItems;
-(id)copyScriptViewController;
-(id)titleOfMenuItemAtIndex:(NSInteger)arg0 ;
-(void)dealloc;
-(void)performActionForMenuItemAtIndex:(NSInteger)arg0 ;


@end


#endif