// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
}


@property (nonatomic) BOOL updateFileCount; // ivar: _updateFileCount


-(id)shortDescription;
-(void)_stopTrackingIfStarted;
-(void)dealloc;
-(void)setCancellationHandler:(id)arg0 ;
-(void)setProgressDidSetupHandler:(id)arg0 ;
-(void)startTrackingFileURL:(id)arg0 kind:(id)arg1 ;
-(void)stopTrackingIfStarted;
-(void)updateWithProgress:(id)arg0 ;


@end


#endif