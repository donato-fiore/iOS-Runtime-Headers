// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXTESTSESSIONPROPERTY_H
#define MXTESTSESSIONPROPERTY_H



#import "MXTestSessionFactory.h"

@interface MXTestSessionProperty : MXTestSessionFactory {
    *opaqueCMSession mSession;
}




-(int)testAudioCategory;
-(int)testAudioHardwareControlFlags;
-(int)testAudioMode;
-(int)testAudioSessionID;
-(int)testCategoryCustomizationDefaultBuiltInRoute;
-(int)testCategoryCustomizationEnableBluetoothRecording;
-(int)testClientName;
-(int)testClientPriority;
-(int)testInterruptionStyle;
-(int)testIsAudioSession;
-(int)testIsFigInstantiatedAudioSession;
-(int)testOverrideRoute;
-(int)testReporterIDs;
-(int)verifyAudioCategoryBehavior:(struct opaqueCMSession *)arg0 isMixable:(struct __CFBoolean *)arg1 postsResumableInterruption:(unsigned char)arg2 isPlayAndRecord:(unsigned char)arg3 withBluetooth:(unsigned char)arg4 andIsDefaultToSpeaker:(unsigned char)arg5 ;
-(int)verifyAudioHWControlFlags:(unsigned int)arg0 ;
-(int)verifyCategoryCustomization:(unsigned char)arg0 andBuiltInRoute:(struct __CFString *)arg1 ;
-(int)verifyClientPriority:(unsigned int)arg0 ;
-(int)verifyInterruptionStyle:(unsigned int)arg0 ;
-(int)verifyOverrideRoute:(unsigned char)arg0 ;


@end


#endif