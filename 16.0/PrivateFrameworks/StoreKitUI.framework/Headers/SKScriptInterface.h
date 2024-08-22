// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSCRIPTINTERFACE_H
#define SKSCRIPTINTERFACE_H

@class SUScriptInterface;


#import "SKProductPageViewController.h"

@interface SKScriptInterface : SUScriptInterface

@property (weak, nonatomic) SKProductPageViewController *parentProductPageViewController; // ivar: _parentProductPageViewController


+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)makeStoreSheetRequest;
-(void)showStoreSheetWithRequest:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif