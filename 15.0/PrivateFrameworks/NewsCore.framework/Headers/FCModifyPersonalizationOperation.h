// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCMODIFYPERSONALIZATIONOPERATION_H
#define FCMODIFYPERSONALIZATIONOPERATION_H

@class NSDictionary, CKRecord, NSError, NTPBPersonalizationProfile;


#import "FCOperation.h"
#import "FCCKPrivateDatabase.h"
#import "FCPersonalizationTreatment.h"

@interface FCModifyPersonalizationOperation : FCOperation

@property (retain, nonatomic) NSDictionary *aggregates; // ivar: _aggregates
@property (retain, nonatomic) FCCKPrivateDatabase *database; // ivar: _database
@property (retain, nonatomic) CKRecord *remoteRecord; // ivar: _remoteRecord
@property (retain, nonatomic) NSError *resultError; // ivar: _resultError
@property (copy, nonatomic) id *saveCompletionHandler; // ivar: _saveCompletionHandler
@property (retain, nonatomic) NTPBPersonalizationProfile *savedProfile; // ivar: _savedProfile
@property (retain, nonatomic) CKRecord *savedRecord; // ivar: _savedRecord
@property (retain, nonatomic) FCPersonalizationTreatment *treatment; // ivar: _treatment


+(id)personalizationProfileFromRecord:(id)arg0 ;
+(void)applyAggregates:(id)arg0 toProfile:(id)arg1 maxRatio:(CGFloat)arg2 ;
+(void)applyChangeGroups:(id)arg0 toProfile:(id)arg1 treatment:(id)arg2 prune:(BOOL)arg3 ;
+(void)applyDeltas:(id)arg0 toProfile:(id)arg1 treatment:(id)arg2 prune:(BOOL)arg3 ;
+(void)pruneAggregates:(id)arg0 ;
-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(BOOL)validateOperation;
-(NSUInteger)maxRetries;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)resetForRetry;


@end


#endif