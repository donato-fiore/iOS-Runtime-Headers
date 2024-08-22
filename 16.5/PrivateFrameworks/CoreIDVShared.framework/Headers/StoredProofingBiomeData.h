// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOREDPROOFINGBIOMEDATA_H
#define STOREDPROOFINGBIOMEDATA_H

@class NSManagedObject, NSString, NSDate;



@interface StoredProofingBiomeData : NSManagedObject

@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic) BOOL isDonated;
@property (nonatomic, copy) NSDate *optInDate;
@property (nonatomic) BOOL optInStatus;
@property (nonatomic, copy) NSString *proofingDecision;
@property (nonatomic, copy) NSString *proofingSessionID;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif