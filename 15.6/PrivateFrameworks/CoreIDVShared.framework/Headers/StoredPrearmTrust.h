// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STOREDPREARMTRUST_H
#define STOREDPREARMTRUST_H

@class NSManagedObject, NSData, NSString;



@interface StoredPrearmTrust : NSManagedObject

@property (nonatomic, copy) NSData *baaCertificate;
@property (nonatomic, copy) NSData *keyBlob;
@property (nonatomic, copy) NSString *pairingID;
@property (nonatomic) BOOL requiresDeletion;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif