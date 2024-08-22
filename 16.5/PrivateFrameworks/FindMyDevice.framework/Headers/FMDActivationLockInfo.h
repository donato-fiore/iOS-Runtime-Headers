// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMDACTIVATIONLOCKINFO_H
#define FMDACTIVATIONLOCKINFO_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDActivationLockInfo : NSObject <NSSecureCoding>



@property (nonatomic) BOOL isActivationLocked; // ivar: _isActivationLocked
@property (nonatomic) BOOL isFindMyLPEMEnabled; // ivar: _isFindMyLPEMEnabled
@property (nonatomic) BOOL isOfflineFindingEnabled; // ivar: _isOfflineFindingEnabled
@property (nonatomic) BOOL isRestrictedSKU; // ivar: _isRestrictedSKU
@property (retain, nonatomic) NSDictionary *localeStrings; // ivar: _localeStrings
@property (retain, nonatomic) NSString *maskedAppleID; // ivar: _maskedAppleID
@property (retain, nonatomic) NSString *maskedOrganizationID; // ivar: _maskedOrganizationID
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif