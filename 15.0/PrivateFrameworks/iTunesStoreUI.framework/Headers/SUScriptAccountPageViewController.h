// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTACCOUNTPAGEVIEWCONTROLLER_H
#define SUSCRIPTACCOUNTPAGEVIEWCONTROLLER_H

@class NSString;


#import "SUScriptStorePageViewController.h"

@interface SUScriptAccountPageViewController : SUScriptStorePageViewController

@property (retain) NSString *style;
@property (readonly) NSString *styleNameDefault;
@property (readonly) NSString *styleNameSignUp;
@property (readonly) NSString *styleNameViewAccount;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;


@end


#endif