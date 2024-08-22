// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTNAVIGATIONBAR_H
#define SUSCRIPTNAVIGATIONBAR_H

@class NSArray, NSString;
@protocol SUScriptNavigationItem;


#import "SUScriptObject.h"
#import "SUScriptNavigationItem.h"
#import "SUScriptButton.h"

@interface SUScriptNavigationBar : SUScriptObject

@property (readonly) SUScriptNavigationItem *backNavigationItem;
@property NSInteger barStyle;
@property (readonly) NSInteger barStyleBlack;
@property (readonly) NSInteger barStyleDefault;
@property (retain) SUScriptButton *leftButton;
@property (retain) NSObject<SUScriptNavigationItem> *leftItem;
@property (readonly) NSArray *navigationItems;
@property (retain) NSString *prompt;
@property (retain) SUScriptButton *rightButton;
@property (retain) NSObject<SUScriptNavigationItem> *rightItem;
@property (readonly) SUScriptNavigationItem *topNavigationItem;
@property (copy) id *translucent;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_copyTopNavigationItem;
-(id)_nativeNavigationBar;
-(id)attributeKeys;
-(id)buttonWithTitle:(id)arg0 style:(id)arg1 target:(id)arg2 action:(id)arg3 ;
-(id)init;
-(id)initWithNativeNavigationBar:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)tearDownUserInterface;


@end


#endif