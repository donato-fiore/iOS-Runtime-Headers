// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWNODEERROR_H
#define BWNODEERROR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BWStillImageSettings.h"
#import "FigCaptureRecordingSettings.h"

@interface BWNodeError : NSObject {
    NSInteger _uniqueID;
    int _errorCode;
    NSString *_sourceNodeDescription;
    BWStillImageSettings *_stillImageSettings;
}


@property (readonly) int errorCode;
@property (readonly) FigCaptureRecordingSettings *recordingSettings; // ivar: _recordingSettings
@property (readonly) NSString *sourceNodeDescription;
@property (readonly) BWStillImageSettings *stillImageSettings;


+(id)newError:(int)arg0 sourceNode:(id)arg1 ;
+(id)newError:(int)arg0 sourceNode:(id)arg1 recordingSettings:(id)arg2 ;
+(id)newError:(int)arg0 sourceNode:(id)arg1 stillImageSettings:(id)arg2 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif