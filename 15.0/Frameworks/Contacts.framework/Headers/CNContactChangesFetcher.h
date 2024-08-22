// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTCHANGESFETCHER_H
#define CNCONTACTCHANGESFETCHER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CNContactChangesFetcher : NSObject {
    BOOL _unify;
    NSSet *_identifiers;
    NSSet *_keysToFetch;
}






@end


#endif