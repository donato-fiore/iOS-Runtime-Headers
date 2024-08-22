// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYPEERRANGE_H
#define PFUBIQUITYPEERRANGE_H

@class NSNumber, NSString;


#import "NSManagedObject.h"
#import "PFUbiquityPeer.h"
#import "PFUbiquityStoreMetadata.h"

@interface PFUbiquityPeerRange : NSManagedObject

@property (retain, nonatomic) NSNumber *end;
@property (retain, nonatomic) PFUbiquityPeer *peer;
@property (retain, nonatomic) NSNumber *peerEnd;
@property (retain, nonatomic) NSString *peerEntityName;
@property (retain, nonatomic) NSNumber *peerStart;
@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;




@end


#endif