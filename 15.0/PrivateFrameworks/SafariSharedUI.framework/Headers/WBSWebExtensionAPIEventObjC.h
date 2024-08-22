// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIEVENTOBJC_H
#define WBSWEBEXTENSIONAPIEVENTOBJC_H

@class NSMapTable, NSEnumerator;


#import "WBSWebExtensionAPIObject.h"

@interface WBSWebExtensionAPIEventObjC : WBSWebExtensionAPIObject {
    NSMapTable *_listeners;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) NSEnumerator *listenersEnumerator;
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)eventWithExtensionIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(BOOL)hasListenerWithBrowserContextController:(id)arg0 listener:(id)arg1 ;
-(void)addListenerWithBrowserContextController:(id)arg0 listener:(id)arg1 ;
-(void)invokeListeners;
-(void)invokeListenersWithArgument:(id)arg0 ;
-(void)invokeListenersWithArgument:(id)arg0 argument:(id)arg1 ;
-(void)invokeListenersWithArgument:(id)arg0 argument:(id)arg1 argument:(id)arg2 ;
-(void)removeListenerWithBrowserContextController:(id)arg0 listener:(id)arg1 ;


@end


#endif