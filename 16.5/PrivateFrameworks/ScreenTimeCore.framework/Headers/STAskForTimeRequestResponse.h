// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STASKFORTIMEREQUESTRESPONSE_H
#define STASKFORTIMEREQUESTRESPONSE_H

@class NSManagedObject, NSNumber, NSDate, NSUUID, NSString;


#import "STFamilyOrganization.h"
#import "STCoreUser.h"

@interface STAskForTimeRequestResponse : NSManagedObject

@property (retain, nonatomic) NSNumber *amountGranted;
@property (retain, nonatomic) NSNumber *answer;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) STFamilyOrganization *familyOrganization;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSDate *requestTimeStamp;
@property (copy, nonatomic) NSString *requestedApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *requestedCategoryIdentifier;
@property (copy, nonatomic) NSString *requestedWebDomain;
@property (retain, nonatomic) STCoreUser *requestingUser;
@property (retain, nonatomic) STCoreUser *respondingUser;
@property (retain, nonatomic) NSDate *responseTimeStamp;
@property (retain, nonatomic) NSNumber *timeRequested;
@property (nonatomic) NSInteger usageType;


+(id)_fetchPredicateForAskForTimeRequest:(id)arg0 requestingUserDSID:(id)arg1 ;
+(id)upsertAskForTimeRequest:(id)arg0 fromUser:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;
-(void)awakeFromInsert;


@end


#endif