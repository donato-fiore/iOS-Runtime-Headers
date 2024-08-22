// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSACOUSTICSLPROXY_H
#define CSACOUSTICSLPROXY_H

@class SLProgressiveCheckerAnalyzer, NSString, CSAudioRecordContext, CSAsset, SLProgressiveCheckerResult, NSArray;
@protocol SLProgressiveCheckerAnalyzerDelegate, CSAcousticSLProxyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSAcousticSLProxy : NSObject <SLProgressiveCheckerAnalyzerDelegate>



@property (retain, nonatomic) SLProgressiveCheckerAnalyzer *acousticAnalyzer; // ivar: _acousticAnalyzer
@property (retain, nonatomic) NSString *configFile; // ivar: _configFile
@property (retain, nonatomic) CSAudioRecordContext *context; // ivar: _context
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSAcousticSLProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isShadowModeEnabled; // ivar: _isShadowModeEnabled
@property (retain, nonatomic) SLProgressiveCheckerResult *latestResult; // ivar: _latestResult
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *reportResultBlock; // ivar: _reportResultBlock
@property (nonatomic) BOOL sessionInProgress; // ivar: _sessionInProgress
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedRecordType; // ivar: _supportedRecordType
@property (retain, nonatomic) NSString *taskName; // ivar: _taskName
@property (retain, nonatomic) NSArray *thresholds; // ivar: _thresholds


-(BOOL)_handleUnintededRequests:(id)arg0 ;
-(id)_createResultDict;
-(id)_timeStampString;
-(id)init;
-(void)_addAudio:(id)arg0 ;
-(void)_logResultToVTDirectory:(id)arg0 ;
-(void)_reportResultToAnalytics;
-(void)_reportResultToSiriDebugApp;
-(void)_reset;
-(void)_setAsset:(id)arg0 forTask:(id)arg1 ;
-(void)_startRequestWithContext:(id)arg0 withVtei:(id)arg1 completion:(id)arg2 ;
-(void)addAudio:(id)arg0 ;
-(void)analyzer:(id)arg0 hasFinalResult:(id)arg1 ;
-(void)analyzer:(id)arg0 hasPartialResult:(id)arg1 ;
-(void)getLatestAcousticSLResult:(id)arg0 ;
-(void)setAsset:(id)arg0 forTask:(id)arg1 ;
-(void)startRequestWithContext:(id)arg0 withVtei:(id)arg1 completion:(id)arg2 ;
-(void)stopRequest;


@end


#endif