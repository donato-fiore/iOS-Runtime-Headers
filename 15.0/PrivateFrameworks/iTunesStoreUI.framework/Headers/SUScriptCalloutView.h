// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTCALLOUTVIEW_H
#define SUSCRIPTCALLOUTVIEW_H

@class NSString;


#import "SUScriptObject.h"

@interface SUScriptCalloutView : SUScriptObject {
    BOOL _isVisible;
    NSString *_subtitle;
    NSString *_title;
}


@property (copy) NSString *subtitle;
@property (copy) NSString *title;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)init;
-(id)scriptAttributeKeys;
-(void)_menuDidHideNotification:(id)arg0 ;
-(void)_reloadUntructedString;
-(void)_resetCalloutBar;
-(void)_setupCalloutBar;
-(void)dealloc;
-(void)setTargetX:(CGFloat)arg0 y:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(void)setVisible:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif