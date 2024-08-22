// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYSTOREMETADATA_H
#define PFUBIQUITYSTOREMETADATA_H

@class NSString, NSSet, NSData;


#import "NSManagedObject.h"

@interface PFUbiquityStoreMetadata : NSManagedObject

@property (retain, nonatomic) NSString *modelVersionHashString;
@property (retain, nonatomic) NSSet *peerStates;
@property (retain, nonatomic) NSSet *primaryKeyRanges;
@property (retain, nonatomic) NSString *storeIdentifier;
@property (retain, nonatomic) NSData *storeOptionsBinaryPlistData;
@property (retain, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSString *storeURLString;
@property (retain, nonatomic) NSSet *transactionEntries;
@property (retain, nonatomic) NSString *ubiquityName;
@property (retain, nonatomic) NSString *ubiquityRelativePath;
@property (retain, nonatomic) NSString *ubiquityRootURLString;


-(id)initWithUbiquityName:(id)arg0 andUbiquityRootLocation:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;


@end


#endif