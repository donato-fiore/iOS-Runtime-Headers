// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYREMOTEPEERSTATE_H
#define PFUBIQUITYREMOTEPEERSTATE_H

@class NSString, NSNumber;


#import "NSManagedObject.h"
#import "PFUbiquityPeer.h"

@interface PFUbiquityRemotePeerState : NSManagedObject

@property (retain, nonatomic) PFUbiquityPeer *peer;
@property (retain, nonatomic) NSString *peerID;
@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) NSNumber *transactionNumber;


-(id)initWithStoreName:(id)arg0 andRemotePeerID:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;


@end


#endif