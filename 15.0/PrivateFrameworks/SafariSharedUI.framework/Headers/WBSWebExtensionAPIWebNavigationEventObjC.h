// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIWEBNAVIGATIONEVENTOBJC_H
#define WBSWEBEXTENSIONAPIWEBNAVIGATIONEVENTOBJC_H

@class NSMapTable;


#import "WBSWebExtensionAPIObject.h"

@interface WBSWebExtensionAPIWebNavigationEventObjC : WBSWebExtensionAPIObject {
    NSMapTable *_listeners;
}


@property (readonly, nonatomic) *void cpp;
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)eventWithExtensionIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(BOOL)hasListenerWithBrowserContextController:(id)arg0 listener:(id)arg1 ;
-(void)addListener:(id)arg0 filter:(id)arg1 browserContextController:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)invokeListenersWithArgument:(id)arg0 URL:(id)arg1 ;
-(void)removeListenerWithBrowserContextController:(id)arg0 listener:(id)arg1 ;


@end


#endif