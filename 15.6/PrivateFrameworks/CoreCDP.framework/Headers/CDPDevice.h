// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDEVICE_H
#define CDPDEVICE_H

@class NSNumber, NSString, NSDate, NSDictionary, NSData;
@protocol NSCopying, NSSecureCoding, CDPDeviceProtocol;

#import <Foundation/Foundation.h>


@interface CDPDevice : NSObject <NSCopying, NSSecureCoding, CDPDeviceProtocol>



@property (retain, nonatomic) NSNumber *coolOffPeriod; // ivar: _coolOffPeriod
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceColor; // ivar: _deviceColor
@property (copy, nonatomic) NSString *enclosureColor; // ivar: _enclosureColor
@property (nonatomic) BOOL hasNumericSecret; // ivar: _hasNumericSecret
@property (nonatomic) BOOL hasRandomSecret; // ivar: _hasRandomSecret
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCurrentDevice; // ivar: _isCurrentDevice
@property (nonatomic) BOOL isUsingMultipleiCSC; // ivar: _isUsingMultipleiCSC
@property (readonly, nonatomic) NSUInteger localSecretType;
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (copy, nonatomic) NSString *machineID; // ivar: _machineID
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *modelClass; // ivar: _modelClass
@property (copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (copy, nonatomic) NSNumber *numericSecretLength; // ivar: _numericSecretLength
@property (nonatomic) NSUInteger platform; // ivar: _platform
@property (copy, nonatomic) NSDate *recordDate; // ivar: _recordDate
@property (copy, nonatomic) NSString *recordID; // ivar: _recordID
@property (copy, nonatomic) NSDictionary *recordInfo; // ivar: _recordInfo
@property (nonatomic) NSUInteger recoveryStatus; // ivar: _recoveryStatus
@property (nonatomic) NSUInteger remainingAttempts; // ivar: _remainingAttempts
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSData *simplePublicKey; // ivar: _simplePublicKey
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif