// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MGHOMEPODACCESSORY_H
#define MGHOMEPODACCESSORY_H

@class NSNumber, NSString;
@protocol MGHomeKitAccessoryProtocol, MGAdvertisementInfoProtocol;


#import "MGSoloDevice.h"

@interface MGHomePodAccessory : MGSoloDevice <MGHomeKitAccessoryProtocol, MGAdvertisementInfoProtocol>



@property (readonly, copy, nonatomic) NSNumber *HomePodVariant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *productColor;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)type;
+(void)HomePodAccessoryWithConnectionProvider:(id)arg0 HomeKitAccessory:(id)arg1 completion:(id)arg2 ;
+(void)HomePodAccessoryWithHomeKitAccessory:(id)arg0 completion:(id)arg1 ;
-(id)HomeKitAccesoryIdentifier;
-(id)HomeKitAccessoryWithHomeManager:(id)arg0 ;
-(id)deviceIdentifier;


@end


#endif