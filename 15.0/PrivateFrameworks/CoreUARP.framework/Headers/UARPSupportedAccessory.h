// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPSUPPORTEDACCESSORY_H
#define UARPSUPPORTEDACCESSORY_H

@class NSMutableSet, NSString, NSSet;

#import <Foundation/Foundation.h>

#import "UARPAccessoryHardwareID.h"

@interface UARPSupportedAccessory : NSObject {
    NSMutableSet *_bsdNotificationsInternal;
    NSMutableSet *_supplementalAssetsInternal;
    NSString *_mobileAssetAppleModelNumber;
    NSString *_modelName;
}


@property (readonly) NSString *appleModelNumber; // ivar: _appleModelNumber
@property (readonly) NSSet *bsdNotifications;
@property (readonly) NSUInteger capabilities; // ivar: _capabilities
@property (readonly) UARPAccessoryHardwareID *hardwareID; // ivar: _hardwareID
@property (readonly) NSString *identifier;
@property (readonly) BOOL isMFi;
@property (readonly) NSString *mobileAssetAppleModelNumber;
@property (retain) NSString *modelName;
@property (readonly) NSString *productGroup; // ivar: _productGroup
@property (readonly) NSString *productNumber; // ivar: _productNumber
@property (readonly) NSSet *supplementalAssets;
@property BOOL supportsHeySiriCompact; // ivar: _supportsHeySiriCompact
@property BOOL supportsPowerLogging; // ivar: _supportsPowerLogging
@property BOOL supportsVoiceAssist; // ivar: _supportsVoiceAssist


+(id)findByAppleModelNumber:(id)arg0 ;
+(id)findByHardwareID:(id)arg0 ;
+(id)supportedAccessories;
+(id)supportedAccessoriesByTransport:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithBluetoothDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithHDSDictionary:(id)arg0 ;
-(id)initWithHIDDictionary:(id)arg0 ;
-(id)initWithHardwareID:(id)arg0 appleModelNumber:(id)arg1 capabilities:(NSUInteger)arg2 ;
-(id)initWithHardwareID:(id)arg0 capabilities:(NSUInteger)arg1 ;
-(id)initWithHardwareID:(id)arg0 productGroup:(id)arg1 productNumber:(id)arg2 capabilities:(NSUInteger)arg3 ;
-(id)initWithUSBPDDictionary:(id)arg0 ;
-(void)addBSDNotificationName:(id)arg0 ;
-(void)addSupplementalAssetName:(id)arg0 ;


@end


#endif