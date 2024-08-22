// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTCHANGESOBSERVERPROXY_H
#define CNCONTACTCHANGESOBSERVERPROXY_H

@class NSArray;
@protocol CNContactChangesObserver;

#import <Foundation/Foundation.h>

#import "CNContact.h"

@interface CNContactChangesObserverProxy : NSObject {
    BOOL _unify;
    id<CNContactChangesObserver> *_observer;
    NSArray *_keysToFetch;
    CNContact *_contactSnapshot;
}






@end


#endif