// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYPEER_H
#define PFUBIQUITYPEER_H

@class NSSet, NSString;


#import "NSManagedObject.h"

@interface PFUbiquityPeer : NSManagedObject

@property (retain, nonatomic) NSSet *localPeerStates;
@property (retain, nonatomic) NSString *peerCode;
@property (retain, nonatomic) NSString *peerKey;
@property (retain, nonatomic) NSSet *primaryKeyRanges;
@property (retain, nonatomic) NSSet *remoteStates;
@property (retain, nonatomic) NSSet *transactionEntries;




@end


#endif