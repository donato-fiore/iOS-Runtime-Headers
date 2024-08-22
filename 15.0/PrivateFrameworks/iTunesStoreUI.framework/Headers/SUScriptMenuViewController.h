// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTMENUVIEWCONTROLLER_H
#define SUSCRIPTMENUVIEWCONTROLLER_H

@class WebScriptObject, NSNumber, NSString;


#import "SUScriptViewController.h"
#import "SUScriptFunction.h"

@interface SUScriptMenuViewController : SUScriptViewController {
    SUScriptFunction *_action;
}


@property (retain) WebScriptObject *action;
@property (retain) id *items;
@property (retain) NSNumber *selectedIndex;
@property (retain) NSString *title;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_viewController;
-(id)attributeKeys;
-(id)itemWithTitle:(id)arg0 userInfo:(id)arg1 ;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif