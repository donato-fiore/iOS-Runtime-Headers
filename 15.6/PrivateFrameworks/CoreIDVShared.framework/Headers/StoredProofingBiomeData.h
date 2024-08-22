// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOREDPROOFINGBIOMEDATA_H
#define STOREDPROOFINGBIOMEDATA_H

@class NSManagedObject, NSString;



@interface StoredProofingBiomeData : NSManagedObject

@property (nonatomic) BOOL isDonated;
@property (nonatomic, copy) NSString *proofingDecision;
@property (nonatomic, copy) NSString *proofingSessionID;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif