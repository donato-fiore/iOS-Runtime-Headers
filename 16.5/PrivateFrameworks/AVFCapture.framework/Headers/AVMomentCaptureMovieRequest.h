// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOMENTCAPTUREMOVIEREQUEST_H
#define AVMOMENTCAPTUREMOVIEREQUEST_H

@class AVWeakReferencingDelegateStorage;

#import <Foundation/Foundation.h>

#import "AVMomentCaptureMovieRecordingResolvedSettings.h"
#import "AVMomentCaptureMovie.h"
#import "AVMomentCaptureSettings.h"
#import "AVMomentCaptureMovieRecordingSettings.h"

@interface AVMomentCaptureMovieRequest : NSObject {
    AVMomentCaptureMovieRecordingResolvedSettings *_resolvedSettings;
    AVMomentCaptureMovie *movie;
    AVMomentCaptureMovie *spatialOverCaptureMovie;
}


@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage; // ivar: _delegateStorage
@property (readonly, nonatomic) NSUInteger expectedMovieCount; // ivar: _expectedMovieCount
@property (nonatomic) unsigned int firedCallbackFlags; // ivar: _firedCallbackFlags
@property (readonly) AVMomentCaptureSettings *momentCaptureSettings; // ivar: _momentCaptureSettings
@property (retain, nonatomic) AVMomentCaptureMovie *movie; // ivar: _movie
@property (retain, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;
@property (retain, nonatomic) AVMomentCaptureMovie *spatialOverCaptureMovie; // ivar: _spatialOverCaptureMovie
@property (readonly) AVMomentCaptureMovieRecordingSettings *unresolvedSettings; // ivar: _unresolvedSettings


+(id)requestWithDelegate:(id)arg0 movieRecordingSettings:(id)arg1 momentSettings:(id)arg2 ;
-(id)_initWithDelegate:(id)arg0 movieRecordingSettings:(id)arg1 momentSettings:(id)arg2 ;
-(void)dealloc;


@end


#endif