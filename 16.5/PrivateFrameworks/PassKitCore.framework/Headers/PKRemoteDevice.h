// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREMOTEDEVICE_H
#define PKREMOTEDEVICE_H

@class NSUUID, NSString, NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKRemotePaymentInstrument.h"

@interface PKRemoteDevice : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSUUID *bluetoothUUID; // ivar: _bluetoothUUID
@property (readonly, nonatomic) BOOL canMakePayments;
@property (retain, nonatomic) PKRemotePaymentInstrument *defaultRemotePaymentInstrument; // ivar: _defaultRemotePaymentInstrument
@property (nonatomic) BOOL deviceDisabled; // ivar: _deviceDisabled
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) BOOL isLocked; // ivar: _isLocked
@property (retain, nonatomic) NSDate *lastSeen; // ivar: _lastSeen
@property (nonatomic) NSInteger majorOperatingSystemVersion; // ivar: _majorOperatingSystemVersion
@property (retain, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (nonatomic) NSInteger proximityState; // ivar: _proximityState
@property (retain, nonatomic) NSArray *remotePaymentInstruments; // ivar: _remotePaymentInstruments
@property (retain, nonatomic) NSArray *supportedSetupFeatures; // ivar: _supportedSetupFeatures
@property (nonatomic) BOOL supportsFaceID; // ivar: _supportsFaceID
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID
@property (nonatomic) BOOL userDisabled; // ivar: _userDisabled


+(BOOL)supportsSecureCoding;
+(id)acceptedComparatorWithPaymentSupportedQuery:(SEL)arg0 ;
+(id)preferenceComparator:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRemoteDevice:(id)arg0 ;
-(NSInteger)_deviceTypeForModelIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIDSDevice:(id)arg0 ;
-(id)pk_idsDestination;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif