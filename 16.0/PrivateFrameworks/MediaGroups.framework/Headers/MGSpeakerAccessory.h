// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGSPEAKERACCESSORY_H
#define MGSPEAKERACCESSORY_H

@class NSString;
@protocol MGHomeKitAccessoryProtocol, MGAdvertisementInfoProtocol;


#import "MGSoloDevice.h"

@interface MGSpeakerAccessory : MGSoloDevice <MGHomeKitAccessoryProtocol, MGAdvertisementInfoProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)type;
+(void)speakerAccessoryWithConnectionProvider:(id)arg0 HomeKitAccessory:(id)arg1 completion:(id)arg2 ;
+(void)speakerAccessoryWithHomeKitAccessory:(id)arg0 completion:(id)arg1 ;
-(id)HomeKitAccesoryIdentifier;
-(id)HomeKitAccessoryWithHomeManager:(id)arg0 ;
-(id)deviceIdentifier;


@end


#endif