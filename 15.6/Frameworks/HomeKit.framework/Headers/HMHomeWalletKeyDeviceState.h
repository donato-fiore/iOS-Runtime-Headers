// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMHOMEWALLETKEYDEVICESTATE_H
#define HMHOMEWALLETKEYDEVICESTATE_H

@class NSArray, NSString;
@protocol HMFObject, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HMHomeWalletKey.h"

@interface HMHomeWalletKeyDeviceState : NSObject <HMFObject, NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property BOOL canAddWalletKey; // ivar: _canAddWalletKey
@property NSInteger canAddWalletKeyErrorCode; // ivar: _canAddWalletKeyErrorCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *expressEnablementConflictingPassDescription; // ivar: _expressEnablementConflictingPassDescription
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (copy) HMHomeWalletKey *walletKey; // ivar: _walletKey


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif