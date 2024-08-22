// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTTRANSPARENTDATA_H
#define KTTRANSPARENTDATA_H

@class NSMutableArray, NSDate, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTTransparentData : NSObject <NSSecureCoding>



@property (retain) NSMutableArray *accounts; // ivar: _accounts
@property (retain) NSDate *currentTreeEpochBeginDate; // ivar: _currentTreeEpochBeginDate
@property (retain) NSData *inclusionProof; // ivar: _inclusionProof
@property (retain) NSData *uriVRFOutput; // ivar: _uriVRFOutput


+(BOOL)supportsSecureCoding;
+(id)filterLoggableDatas:(id)arg0 clientDataVRFOutput:(id)arg1 ;
+(id)filterLoggableDatas:(id)arg0 deviceIdVRFOutput:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateWithMapLeaf:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateWithMutation:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateWithSMTs:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateActiveClientDatasForAccountId:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAndUpdateWithServerLoggableDatas:(id)arg0 accountId:(id)arg1 requestTime:(CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)validateAndUpdateWithSyncedLoggableDatas:(id)arg0 accountId:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateOtherAccountIDsInactiveForAccountId:(id)arg0 requestTime:(CGFloat)arg1 error:(*id)arg2 ;
-(id)accountForAccountId:(id)arg0 ;
-(id)clientDatasMissingVRFs:(id)arg0 maximum:(NSInteger)arg1 ;
-(id)copy;
-(id)debugDescription;
-(id)description;
-(id)devicesMissingVRFs:(id)arg0 maximum:(NSInteger)arg1 ;
-(id)earliestAddedDate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUriVRFOutput:(id)arg0 ;
-(id)initWithUriVRFOutput:(id)arg0 mapLeaf:(id)arg1 pendingSMTs:(id)arg2 error:(*id)arg3 ;
-(id)mutationsFromSMTs:(id)arg0 error:(*id)arg1 ;
-(id)serialize;
-(id)sortMutationsByTimestamp:(id)arg0 ;
-(void)addAccountsObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markAccountsWithMutationMs:(NSUInteger)arg0 ;
-(void)removeAccountsObject:(id)arg0 ;


@end


#endif