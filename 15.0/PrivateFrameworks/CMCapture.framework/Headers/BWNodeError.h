// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWNODEERROR_H
#define BWNODEERROR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FigCaptureStillImageSettings.h"
#import "BWStillImageCaptureSettings.h"
#import "FigCaptureRecordingSettings.h"

@interface BWNodeError : NSObject {
    NSInteger _uniqueID;
    int _errorCode;
    NSString *_sourceNodeDescription;
    FigCaptureStillImageSettings *_requestedStillImageCaptureSettings;
    BWStillImageCaptureSettings *_resolvedStillImageCaptureSettings;
}


@property (readonly) int errorCode;
@property (readonly) FigCaptureRecordingSettings *recordingSettings; // ivar: _recordingSettings
@property (readonly) FigCaptureStillImageSettings *requestedStillImageCaptureSettings;
@property (readonly) BWStillImageCaptureSettings *resolvedStillImageCaptureSettings;
@property (readonly) NSString *sourceNodeDescription;


+(id)newError:(int)arg0 sourceNode:(id)arg1 ;
+(id)newError:(int)arg0 sourceNode:(id)arg1 recordingSettings:(id)arg2 ;
+(id)newError:(int)arg0 sourceNode:(id)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 ;
-(NSUInteger)hash;
-(id)_initWithError:(int)arg0 sourceNode:(id)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 recordingSettings:(id)arg4 ;
-(void)dealloc;


@end


#endif