// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTSTORESHEETVIEWCONTROLLER_H
#define SUSCRIPTSTORESHEETVIEWCONTROLLER_H



#import "SUScriptViewController.h"

@interface SUScriptStoreSheetViewController : SUScriptViewController

@property NSInteger productPageStyle;
@property (readonly) NSInteger productPageStyleAutomatic;
@property (readonly) NSInteger productPageStylePad;
@property (readonly) NSInteger productPageStylePhone;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;
-(void)loadWithProductParameters:(id)arg0 ;
-(void)loadWithProductURL:(id)arg0 ;


@end


#endif