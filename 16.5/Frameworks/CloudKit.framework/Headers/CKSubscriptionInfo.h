// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSUBSCRIPTIONINFO_H
#define CKSUBSCRIPTIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CKDatabase.h"
#import "CKContainer.h"

@interface CKSubscriptionInfo : NSObject {
    CKDatabase *_database;
    CKContainer *_container;
    id *_idHandler;
    NSString *_subscriptionID;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif