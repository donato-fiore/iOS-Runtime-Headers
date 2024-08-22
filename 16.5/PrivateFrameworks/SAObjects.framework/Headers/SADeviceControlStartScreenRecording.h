// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADEVICECONTROLSTARTSCREENRECORDING_H
#define SADEVICECONTROLSTARTSCREENRECORDING_H



#import "SABaseClientBoundCommand.h"

@interface SADeviceControlStartScreenRecording : SABaseClientBoundCommand



+(id)startScreenRecording;
+(id)startScreenRecordingWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif