// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTURELOGSMARTCAMERAGATING_H
#define FIGCAPTURELOGSMARTCAMERAGATING_H

@class NSDate, NSSet;

#import <Foundation/Foundation.h>


@interface FigCaptureLogSmartCameraGating : NSObject {
    int _gateIdentifier;
    os_unfair_lock_s _lock;
    NSDate *_openingTimestamp;
    NSSet *_currentPresentations;
    int _numFrames;
    int _numTrackedRegions;
    int _numBoxesPresented;
    int _numEmptyFrames;
    int _numClosingFrames;
}




+(void)initialize;
-(id)initWithGateIdentifier:(int)arg0 ;
-(void)dealloc;
-(void)logGateClosed;
-(void)logGateOpened;
-(void)logSmartCamIsConfident:(BOOL)arg0 presentedIdentifiers:(id)arg1 presentedCount:(int)arg2 ;
-(void)logTracksCreated:(int)arg0 ;


@end


#endif