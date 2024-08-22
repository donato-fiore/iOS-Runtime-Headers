// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTTEXTFIELD_H
#define SUSCRIPTTEXTFIELD_H

@class NSString, WebScriptObject, NSNumber;
@protocol SUScriptNavigationItem;


#import "SUScriptObject.h"
#import "SUScriptFunction.h"

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem>

 {
    SUScriptFunction *_shouldFocusFunction;
    NSString *_style;
}


@property (retain) NSString *autocapitalizationType;
@property (retain) NSString *autocorrectionType;
@property (readonly, nonatomic) BOOL canBecomeFirstResponder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *keyboardType;
@property (retain) NSString *placeholder;
@property (retain) WebScriptObject *shouldFocusFunction;
@property (readonly) NSString *style;
@property (readonly) Class superclass;
@property (retain) NSString *value;
@property (retain) NSNumber *width;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)_styleIsValid:(id)arg0 ;
-(BOOL)blur;
-(BOOL)focus;
-(CGFloat)_defaultWidth;
-(id)_boxedNativeTextField;
-(id)_className;
-(id)_copyPlaceholder;
-(id)_copyValue;
-(id)_newTextField;
-(id)attributeKeys;
-(id)buttonItem;
-(id)init;
-(id)initWithTextFieldStyle:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;
-(void)setNativeObjectWithBarButtonItem:(id)arg0 ;
-(void)setNativeObjectWithSearchBar:(id)arg0 ;
-(void)setNativeObjectWithTextField:(id)arg0 ;


@end


#endif