// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SADEVICECONTROLTAKESCREENSHOT_H
#define SADEVICECONTROLTAKESCREENSHOT_H



#import "SABaseClientBoundCommand.h"

@interface SADeviceControlTakeScreenshot : SABaseClientBoundCommand



+(id)takeScreenshot;
+(id)takeScreenshotWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif