// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPTPERFORMANCETEST_H
#define NPTPERFORMANCETEST_H

@class NSMutableDictionary, NSString, NSDictionary, NetworkQualityExecutions;
@protocol NPTPingDelegate, NPTDownloadDelegate, NPTUploadDelegate, NSSecureCoding, NSCopying, OS_nw_activity;

#import <Foundation/Foundation.h>

#import "NPTDownload.h"
#import "NPTUpload.h"
#import "NPTPing.h"
#import "NPTPerformanceTestConfiguration.h"
#import "NPTResults.h"

@interface NPTPerformanceTest : NSObject <NPTPingDelegate, NPTDownloadDelegate, NPTUploadDelegate, NSSecureCoding, NSCopying>

 {
    NPTDownload *download;
    NPTUpload *upload;
    NPTPing *ping;
    NSMutableDictionary *restoredMetadata;
    NSString *uuid;
    NSObject<OS_nw_activity> *performanceTestActivity;
    NSMutableDictionary *snapshots;
    BOOL activatedActivity;
}


@property (retain, nonatomic) NSDictionary *_additionalMetadata; // ivar: __additionalMetadata
@property (retain, nonatomic) NPTPerformanceTestConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inTimedMode; // ivar: _inTimedMode
@property (readonly, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NetworkQualityExecutions *networkQualityExecution; // ivar: _networkQualityExecution
@property (retain, nonatomic) NPTResults *results; // ivar: _results
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)performanceTestWithConfiguration:(id)arg0 ;
+(id)performanceTestWithDefaultConfiguration;
-(id)convertDateToISO8601String:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getFlattenedDictionary;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)timestampMasked;
-(id)timestampMaskedString;
-(void)activateActivity;
-(void)cancelAllNetworking;
-(void)completeActivityWithReason:(int)arg0 ;
-(void)dealloc;
-(void)download:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)download:(id)arg0 didFinishWithResults:(id)arg1 ;
-(void)download:(id)arg0 didReceiveSpeedMetric:(id)arg1 ;
-(void)downloadWillStart;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCDNDebugInfoWithTimeoutDuration:(CGFloat)arg0 withCompletion:(id)arg1 ;
-(void)pingDidFinishWithError:(id)arg0 ;
-(void)pingDidFinishWithResults:(id)arg0 ;
-(void)pingWillStartPinging;
-(void)save;
-(void)startDownloadWithCompletion:(id)arg0 ;
-(void)startNetworkQualityWithCompletionHandler:(id)arg0 ;
-(void)startPingWithCompletion:(id)arg0 ;
-(void)startTestWithCompletion:(id)arg0 ;
-(void)startUploadWithCompletion:(id)arg0 ;
-(void)upload:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)upload:(id)arg0 didFinishWithResults:(id)arg1 ;
-(void)upload:(id)arg0 didReceiveSpeedMetric:(id)arg1 ;
-(void)uploadWillStart;


@end


#endif