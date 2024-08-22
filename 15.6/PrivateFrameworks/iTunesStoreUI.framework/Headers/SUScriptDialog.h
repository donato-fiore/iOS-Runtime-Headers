// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTDIALOG_H
#define SUSCRIPTDIALOG_H

@class NSString, NSNumber;


#import "SUScriptObject.h"

@interface SUScriptDialog : SUScriptObject {
    NSString *_body;
    id *_buttons;
    NSNumber *_cancelButtonIndex;
    NSNumber *_destructiveButtonIndex;
    id *_textFields;
    NSString *_title;
}


@property (retain) NSString *body;
@property (retain) id *buttons;
@property (retain) NSNumber *cancelButtonIndex;
@property (retain) NSNumber *destructiveButtonIndex;
@property (retain) id *textFields;
@property (retain) NSString *title;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_nativeDialog;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)_logSheetWarnings;
-(void)dealloc;
-(void)dismiss;
-(void)show;
-(void)showFromDOMElement:(id)arg0 ;
-(void)showSheet;
-(void)showSheetInPopOver:(id)arg0 ;


@end


#endif