// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HIDPREFERENCESHELPERLISTENER_H
#define HIDPREFERENCESHELPERLISTENER_H

@class NSMutableArray;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface HIDPreferencesHelperListener : NSObject {
    NSObject<OS_xpc_object> *_listener;
    NSMutableArray *_clients;
}




-(BOOL)setupListener;
-(id)init;
-(void)acceptConnection:(id)arg0 ;
-(void)removeClient:(id)arg0 ;


@end


#endif