// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLTRAINING_H
#define PMLTRAINING_H

@class DESRecordStore, NSDictionary, NSString;
@protocol PMLAWDMetricQueryDelegate, PMLTrainingProtocol;

#import <Foundation/Foundation.h>

#import "PMLAWDAvailableSessionsTracker.h"
#import "PMLTrainingStore.h"

@interface PMLTraining : NSObject <PMLAWDMetricQueryDelegate, PMLTrainingProtocol>

 {
    DESRecordStore *_fidesStore;
    PMLAWDAvailableSessionsTracker *_availableSessionsTracker;
    NSDictionary *_isMultiLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PMLTrainingStore *store; // ivar: _store
@property (readonly) Class superclass;


+(id)sharedSingletonWithDirectory:(id)arg0 ;
-(BOOL)isMultiLabelModel:(id)arg0 ;
-(id)_trainWithRecipe:(id)arg0 chunkData:(id)arg1 args:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithStore:(id)arg0 fidesStore:(id)arg1 availableSessionsTracker:(id)arg2 ;
-(id)lastTrainingFeaturizationForModelName:(id)arg0 andLocale:(id)arg1 ;
-(id)planReceivedWithPayload:(id)arg0 error:(*id)arg1 ;
-(id)planReceivedWithRecipe:(id)arg0 attachments:(id)arg1 error:(*id)arg2 ;
-(void)_deleteAllSavedRecordsFromFidesStoreSync;
-(void)_sendStatsToFidesForModel:(id)arg0 sessionCount:(NSUInteger)arg1 positivesCount:(NSUInteger)arg2 negativesCount:(NSUInteger)arg3 support:(float)arg4 ;
-(void)_sendStatsToFidesForMultiLabelModel:(id)arg0 sessionCount:(NSUInteger)arg1 labeledStats:(id)arg2 ;
-(void)addSessionWithCovariates:(id)arg0 label:(NSInteger)arg1 sessionDescriptor:(id)arg2 spotlightReference:(id)arg3 isInternal:(BOOL)arg4 ;
-(void)availableSessionsStatsReportedToAWD;
-(void)deleteSessionsWithBundleID:(id)arg0 ;
-(void)deleteSessionsWithDomainIdentifiers:(id)arg0 bundleID:(id)arg1 ;
-(void)deleteSessionsWithIdentifiers:(id)arg0 bundleID:(id)arg1 ;
-(void)sendSessionStatsToFides;
-(void)trimDbWithDeferralBlock:(id)arg0 ;
-(void)updateLastTrainingFeaturizationForModel:(id)arg0 andData:(id)arg1 ;
-(void)updateSessionsAndLabelForModel:(id)arg0 block:(id)arg1 ;


@end


#endif