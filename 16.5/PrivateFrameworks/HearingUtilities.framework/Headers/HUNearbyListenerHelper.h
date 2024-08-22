// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNEARBYLISTENERHELPER_H
#define HUNEARBYLISTENERHELPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "HUNearbyController.h"

@interface HUNearbyListenerHelper : NSObject {
    id *_listenerAddress;
    HUNearbyController *_delegate;
    NSMutableDictionary *_keys;
}




-(id)initWithListenerAddress:(id)arg0 andDelegate:(id)arg1 ;
-(void)addKey:(id)arg0 forDomain:(id)arg1 ;
-(void)dealloc;


@end


#endif