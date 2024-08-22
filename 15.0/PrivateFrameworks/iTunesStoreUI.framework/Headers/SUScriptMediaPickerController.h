// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTMEDIAPICKERCONTROLLER_H
#define SUSCRIPTMEDIAPICKERCONTROLLER_H

@class NSArray, NSString;


#import "SUScriptViewController.h"

@interface SUScriptMediaPickerController : SUScriptViewController

@property BOOL allowsPickingMultipleItems;
@property (readonly) NSArray *mediaTypes;
@property (retain) NSString *prompt;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithMediaTypes:(id)arg0 ;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;
-(void)setNativeViewController:(id)arg0 ;


@end


#endif