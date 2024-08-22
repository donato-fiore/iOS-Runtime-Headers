// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSUBSCRIPTIONINFO_H
#define CKSUBSCRIPTIONINFO_H


#import <Foundation/Foundation.h>

#import "CKSubscription.h"
#import "CKDatabase.h"
#import "CKContainer.h"

@interface CKSubscriptionInfo : NSObject {
    CKSubscription *_subscription;
    CKDatabase *_database;
    CKContainer *_container;
    id *_handler;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif