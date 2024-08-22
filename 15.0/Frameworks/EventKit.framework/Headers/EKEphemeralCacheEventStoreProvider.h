// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEPHEMERALCACHEEVENTSTOREPROVIDER_H
#define EKEPHEMERALCACHEEVENTSTOREPROVIDER_H

@class NSString;
@protocol EKEventStoreProvider;

#import <Foundation/Foundation.h>

#import "EKTimedEventStorePurger.h"

@interface EKEphemeralCacheEventStoreProvider : NSObject <EKEventStoreProvider>

 {
    EKTimedEventStorePurger *_eventStorePurger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)eventStore;
-(id)initWithCreationBlock:(id)arg0 ;


@end


#endif