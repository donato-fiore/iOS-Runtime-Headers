// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSERVERCHANGETOKEN_H
#define ICSERVERCHANGETOKEN_H

@class NSManagedObject, CKServerChangeToken, NSData, NSString, CKRecordZoneID;
@protocol ICLoggable;


#import "ICAccount.h"

@interface ICServerChangeToken : NSManagedObject <ICLoggable>



@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) CKServerChangeToken *ckServerChangeToken; // ivar: _ckServerChangeToken
@property (retain, nonatomic) NSData *ckServerChangeTokenData;
@property (nonatomic) NSInteger databaseScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *ownerName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID
@property (retain, nonatomic) NSString *zoneName;


+(id)addServerChangeTokenForAccount:(id)arg0 ckServerChangeToken:(id)arg1 zoneID:(id)arg2 databaseScope:(NSInteger)arg3 context:(id)arg4 ;
+(id)serverChangeTokenForAccount:(id)arg0 zoneID:(id)arg1 databaseScope:(NSInteger)arg2 context:(id)arg3 ;
+(id)serverChangeTokensMatchingPredicate:(id)arg0 inContext:(id)arg1 ;
-(id)ic_loggingValues;
-(void)didTurnIntoFault;


@end


#endif