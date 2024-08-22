// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADEVICECONTROLSTOPSCREENRECORDING_H
#define SADEVICECONTROLSTOPSCREENRECORDING_H



#import "SABaseClientBoundCommand.h"

@interface SADeviceControlStopScreenRecording : SABaseClientBoundCommand



+(id)stopScreenRecording;
+(id)stopScreenRecordingWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif