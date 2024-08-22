// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKICLOUDKVSTORE_H
#define CUIKICLOUDKVSTORE_H

@class NSDate;
@protocol NSObject><NSCopying><NSCoding;

#import <Foundation/Foundation.h>


@interface CUIKiCloudKVStore : NSObject

@property (nonatomic) BOOL hasConnectedToCarBluetooth; // ivar: _hasConnectedToCarBluetooth
@property (retain, nonatomic) NSDate *lastCarConnectionDate; // ivar: _lastCarConnectionDate
@property (retain) NSObject<NSObject><NSCopying><NSCoding> *ubiquityIdentityToken; // ivar: _ubiquityIdentityToken


+(BOOL)_haveiCloudKVStoreEntitlement;
+(id)sharediCloudKVStore;
-(BOOL)_canAccessiCloudKVStore;
-(id)init;
-(void)_identityChanged:(id)arg0 ;
-(void)_storeDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif