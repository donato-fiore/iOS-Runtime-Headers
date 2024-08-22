// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateWithMapLeaf:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateWithMutation:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateWithSMTs:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateActiveClientDatasForAccountKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAndUpdateWithServerLoggableDatas:(id)arg0 accountKey:(id)arg1 requestTime:(CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)validateAndUpdateWithSyncedLoggableDatas:(id)arg0 accountKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateOtherAccountKeyHashesInactiveForAccountKey:(id)arg0 requestTime:(CGFloat)arg1 error:(*id)arg2 ;
-(id)accountForAccountKey:(id)arg0 ;
-(id)accountForAccountKeyHash:(id)arg0 ;
-(id)copy;
-(id)debugDescription;
-(id)description;
-(id)earliestAddedDate:(id)arg0 ;
-(id)failedRecordsForSyncedLoggableDatas:(id)arg0 accountKey:(id)arg1 error:(*id)arg2 ;
-(id)failedServerLoggableDatas:(id)arg0 accountKey:(id)arg1 requestTime:(CGFloat)arg2 error:(*id)arg3 ;
-(id)failureDetails:(id)arg0 loggableData:(id)arg1 ;
-(id)filterLoggableDatas:(id)arg0 clientDataHash:(id)arg1 ;
-(id)filterLoggableDatas:(id)arg0 deviceIdHash:(id)arg1 ;
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