// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STOREDBIOMEMETADATA_H
#define STOREDBIOMEMETADATA_H

@class NSManagedObject, NSString, NSDate;



@interface StoredBiomeMetadata : NSManagedObject

@property (nonatomic, copy) NSString *deviceLanguage;
@property (nonatomic, copy) NSString *dob;
@property (nonatomic, copy) NSString *ethnicity;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *issuer;
@property (nonatomic, copy) NSString *proofingSessionID;
@property (nonatomic) NSInteger skinTone;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif