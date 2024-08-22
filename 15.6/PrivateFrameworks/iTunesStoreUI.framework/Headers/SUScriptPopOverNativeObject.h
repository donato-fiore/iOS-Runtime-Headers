// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTPOPOVERNATIVEOBJECT_H
#define SUSCRIPTPOPOVERNATIVEOBJECT_H

@class UIBarButtonItem;


#import "SUScriptNativeObject.h"
#import "SUDOMElement.h"

@interface SUScriptPopOverNativeObject : SUScriptNativeObject {
    BOOL _redisplayAfterRotation;
}


@property (retain, nonatomic) UIBarButtonItem *sourceButtonItem; // ivar: _sourceButtonItem
@property (retain, nonatomic) SUDOMElement *sourceDOMElement; // ivar: _sourceDOMElement


-(BOOL)_isAffectedByWindowNotification:(id)arg0 ;
-(void)_windowDidRotateNotification:(id)arg0 ;
-(void)_windowWillRotateNotification:(id)arg0 ;
-(void)dealloc;
-(void)destroyNativeObject;
-(void)setupNativeObject;


@end


#endif