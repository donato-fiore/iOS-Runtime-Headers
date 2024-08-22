// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAWORKERJOB_H
#define PHAWORKERJOB_H

@class PHPhotoLibrary;
@protocol NSCopying, PHAWorkerJobDelegate;

#import <Foundation/Foundation.h>


@interface PHAWorkerJob : NSObject <NSCopying>



@property (readonly, nonatomic) float completionScore;
@property (nonatomic) NSUInteger countOfFailedStarts; // ivar: _countOfFailedStarts
@property (weak, nonatomic) NSObject<PHAWorkerJobDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didTimeout; // ivar: _didTimeout
@property (nonatomic) BOOL disableReactionCheck; // ivar: _disableReactionCheck
@property (readonly, nonatomic) BOOL finished;
@property (nonatomic) BOOL ignoreFurtherResults; // ivar: _ignoreFurtherResults
@property (readonly) CGFloat intervalSinceLastReport;
@property BOOL isGraphUpdateJob; // ivar: _isGraphUpdateJob
@property (nonatomic, setter=setIsReactionJob:) BOOL isReactionJob; // ivar: _isReactionJob
@property CGFloat lastReportTimeAsInterval; // ivar: _lastReportTimeAsInterval
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property BOOL producedAssetMetadataChanges; // ivar: _producedAssetMetadataChanges
@property (readonly, nonatomic) NSUInteger scenario; // ivar: _scenario
@property (nonatomic) BOOL treatMissingResultsAsFailures; // ivar: _treatMissingResultsAsFailures
@property (readonly, nonatomic) short workerType; // ivar: _workerType


-(BOOL)isEqualToWorkerJob:(id)arg0 ;
-(BOOL)startProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(BOOL)stopProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithWorkerType:(short)arg0 scenario:(NSUInteger)arg1 library:(id)arg2 ;
-(id)statusAsDictionary;
-(void)extendTimeout;
-(void)extendTimeoutOrUpdateStopIfNeeded:(*BOOL)arg0 ;
-(void)finish;
-(void)prepare;
-(void)stopAcceptingResults;


@end


#endif