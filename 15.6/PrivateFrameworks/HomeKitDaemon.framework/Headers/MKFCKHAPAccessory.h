// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKHAPACCESSORY_H
#define MKFCKHAPACCESSORY_H

@class NSNumber, NSData, NSDictionary, NSString;


#import "MKFCKAccessory.h"

@interface MKFCKHAPAccessory : MKFCKAccessory

@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSNumber *certificationStatus;
@property (nonatomic) BOOL hasOnboardedForNaturalLighting;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSDictionary *serviceApplicationData;
@property (retain, nonatomic) NSDictionary *serviceAssociatedServiceTypes;
@property (retain, nonatomic) NSDictionary *serviceConfiguredNames;
@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (copy, nonatomic) NSString *uniqueIdentifier;


+(id)fetchRequest;
+(id)fetchWithLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(id)fetchLocalModelWithContext:(id)arg0 ;


@end


#endif