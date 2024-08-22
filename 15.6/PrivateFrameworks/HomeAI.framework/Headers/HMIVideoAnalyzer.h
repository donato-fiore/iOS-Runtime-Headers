// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOANALYZER_H
#define HMIVIDEOANALYZER_H

@class HMFObject, NSString, NSSet, NSUUID, NSDictionary;
@protocol HMFLogging, HMIVideoAnalyzerDelegate;


#import "HMIAnalysisStateManager.h"
#import "HMIVideoAnalyzerConfiguration.h"
#import "HMIHomePersonManager.h"
#import "HMIVideoAnalyzerMutableReport.h"
#import "HMIVideoAnalyzerState.h"

@interface HMIVideoAnalyzer : HMFObject <HMFLogging>



@property (nonatomic) CGFloat analysisFPS;
@property (retain) HMIAnalysisStateManager *analysisStateManager; // ivar: _analysisStateManager
@property (readonly, copy) HMIVideoAnalyzerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CGFloat delay;
@property (weak) NSObject<HMIVideoAnalyzerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL encode;
@property (retain) NSSet *externalPersonManagers; // ivar: _externalPersonManagers
@property (readonly) NSUInteger hash;
@property (retain) HMIHomePersonManager *homePersonManager; // ivar: _homePersonManager
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL monitored;
@property (readonly, copy) NSDictionary *options; // ivar: _options
@property (readonly) HMIVideoAnalyzerMutableReport *report; // ivar: _report
@property (readonly) HMIVideoAnalyzerState *state; // ivar: _state
@property (readonly) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;


+(id)allowedClasses;
+(id)analyzerWithConfiguration:(id)arg0 identifier:(id)arg1 error:(*id)arg2 ;
+(id)analyzerWithConfiguration:(id)arg0 identifier:(id)arg1 remote:(BOOL)arg2 error:(*id)arg3 ;
+(id)analyzerWithOptions:(id)arg0 error:(*id)arg1 ;
+(id)logCategory;
-(id)finalizeFragmentResult:(id)arg0 homePersonManager:(id)arg1 analysisStateManager:(id)arg2 ;
-(id)initWithConfiguration:(id)arg0 identifier:(id)arg1 ;
-(id)logIdentifier;
-(void)analyzeFragment:(id)arg0 configuration:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)finish;
-(void)finishWithCompletionHandler:(id)arg0 ;
-(void)flush;
-(void)flushAsync;
-(void)handleAssetData:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleMessageWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif