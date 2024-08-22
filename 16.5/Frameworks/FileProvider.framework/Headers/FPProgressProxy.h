// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPPROGRESSPROXY_H
#define FPPROGRESSPROXY_H

@class NSProgress, NSURL, NSObservation;



@interface FPProgressProxy : NSProgress {
    id *_subscriber;
    NSURL *_fileURL;
    BOOL _shouldStopAccessingURL;
    NSObservation *_totalUnitCountObservation;
    NSObservation *_fractionCompletedObservation;
    BOOL _didSetupParentProgress;
    BOOL _isInSetup;
}


@property (nonatomic) BOOL updateFileCount; // ivar: _updateFileCount


-(id)shortDescription;
-(void)_readPausedProgressFromDisk;
-(void)dealloc;
-(void)setCancellationHandler:(id)arg0 ;
-(void)setProgressDidSetupHandler:(id)arg0 ;
-(void)startTrackingFileURL:(id)arg0 kind:(id)arg1 allowReadPausedProgressFromDisk:(BOOL)arg2 ;
-(void)stopTrackingIfStarted;
-(void)stopTrackingIfStartedNotSynchronized;
-(void)updateWithProgress:(id)arg0 ;


@end


#endif