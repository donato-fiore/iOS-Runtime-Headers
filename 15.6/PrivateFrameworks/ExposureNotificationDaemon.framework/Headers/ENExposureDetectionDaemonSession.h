// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENEXPOSUREDETECTIONDAEMONSESSION_H
#define ENEXPOSUREDETECTIONDAEMONSESSION_H

@class ENExposureConfiguration, ENExposureDetectionHistorySession, ENExposureClassification, ENRegionConfiguration, ENRegionServerConfiguration, ENRegionServerExposureConfiguration, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENExposureDetectionDaemonSessionStatistics.h"
#import "ENAdvertisementDatabaseQuerySession.h"
#import "ENXPCClient.h"
#import "ENExposureCalculationSession.h"
#import "ENExposureDatabase.h"

@interface ENExposureDetectionDaemonSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSUInteger _signpostID;
    ENExposureDetectionDaemonSessionStatistics *_statistics;
    BOOL _finished;
    BOOL _prepared;
    BOOL _shouldCopyStatistics;
    BOOL _useCache;
}


@property (retain, nonatomic) ENAdvertisementDatabaseQuerySession *advertisementDatabaseQuerySession; // ivar: _advertisementDatabaseQuerySession
@property (retain, nonatomic) ENXPCClient *client; // ivar: _client
@property (retain, nonatomic) ENExposureConfiguration *clientExposureConfiguration; // ivar: _clientExposureConfiguration
@property (readonly, nonatomic) ENExposureCalculationSession *exposureCalculationSession; // ivar: _exposureCalculationSession
@property (retain, nonatomic) ENExposureDatabase *exposureDatabase; // ivar: _exposureDatabase
@property (readonly, nonatomic) ENExposureDetectionHistorySession *historySession; // ivar: _historySession
@property (retain, nonatomic) ENExposureClassification *previousExposureClassification; // ivar: _previousExposureClassification
@property (copy, nonatomic) ENRegionConfiguration *regionConfiguration; // ivar: _regionConfiguration
@property (copy, nonatomic) ENRegionServerConfiguration *regionServerConfiguration; // ivar: _regionServerConfiguration
@property (copy, nonatomic) ENRegionServerExposureConfiguration *serverExposureConfiguration; // ivar: _serverExposureConfiguration
@property (copy, nonatomic) NSDate *sessionDate; // ivar: _sessionDate
@property (readonly, copy, nonatomic) ENExposureConfiguration *sessionExposureConfiguration; // ivar: _sessionExposureConfiguration
@property (nonatomic) BOOL skipFileSigningVerification; // ivar: _skipFileSigningVerification
@property (readonly, copy, nonatomic) ENExposureDetectionDaemonSessionStatistics *statistics;
@property (nonatomic) NSUInteger tekMatchBatchSize; // ivar: _tekMatchBatchSize


-(BOOL)_addMatchesFromFileSession:(id)arg0 publicKey:(id)arg1 endpoint:(id)arg2 error:(*id)arg3 ;
-(BOOL)_checkFinishedAndReturnError:(*id)arg0 ;
-(BOOL)_checkPreparedAndReturnError:(*id)arg0 ;
-(BOOL)_classifyExposureWithResult:(id)arg0 error:(*id)arg1 ;
-(BOOL)_prepareAndReturnError:(*id)arg0 ;
-(BOOL)_shouldMatchPersistenKey:(id)arg0 ;
-(BOOL)_verifySignatureForFileSession:(id)arg0 publicKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)addMatchesFromFileSession:(id)arg0 publicKey:(id)arg1 endpoint:(id)arg2 error:(*id)arg3 ;
-(BOOL)classifyExposureWithResult:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareAndReturnError:(*id)arg0 ;
-(BOOL)prepareConfiguration:(id)arg0 bundleIdentifier:(id)arg1 nowDate:(id)arg2 expiryInterval:(CGFloat)arg3 error:(*id)arg4 ;
-(id)_finishAndReturnError:(*id)arg0 ;
-(id)_getAnalysisSessionAndReturnError:(*id)arg0 ;
-(id)_getBeaconCountMetricsAndReturnError:(*id)arg0 ;
-(id)_getSummaryAndReturnError:(*id)arg0 ;
-(id)_prepareExposureCalculationSessionWithError:(*id)arg0 ;
-(id)description;
-(id)finishAndReturnError:(*id)arg0 ;
-(id)getAnalysisSessionAndReturnError:(*id)arg0 ;
-(id)getBeaconCountMetricsAndReturnError:(*id)arg0 ;
-(id)getSummaryAndReturnError:(*id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_addFileToHistoryWithHash:(id)arg0 metadata:(id)arg1 endpoint:(id)arg2 keyCount:(NSUInteger)arg3 matchCount:(NSUInteger)arg4 ;
-(void)_invalidate;
-(void)_signpostBegin;
-(void)_signpostEnd;
-(void)_updateStatisticsWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif