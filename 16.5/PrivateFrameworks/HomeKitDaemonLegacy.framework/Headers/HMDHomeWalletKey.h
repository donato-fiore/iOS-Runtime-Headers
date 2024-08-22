// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEWALLETKEY_H
#define HMDHOMEWALLETKEY_H

@class HMFObject, NSString, NSURL, NSUUID;
@protocol NSCopying, NSMutableCopying;


#import "HMDHomeWalletKeySecureElementInfo.h"

@interface HMDHomeWalletKey : HMFObject <NSCopying, NSMutableCopying>



@property (copy) NSString *accessCode; // ivar: _accessCode
@property (copy) NSURL *changeAccessCodeHomeAppCustomURL; // ivar: _changeAccessCodeHomeAppCustomURL
@property NSInteger color; // ivar: _color
@property (copy) NSURL *customURL; // ivar: _customURL
@property (copy) NSString *homeName; // ivar: _homeName
@property (readonly, copy) NSString *labelColorValue;
@property (copy) HMDHomeWalletKeySecureElementInfo *nfcInfo; // ivar: _nfcInfo
@property (readonly, copy) NSString *passColorValue;
@property (readonly, copy) NSString *serialNumber; // ivar: _serialNumber
@property NSInteger state; // ivar: _state
@property (readonly, copy) NSString *typeIdentifier; // ivar: _typeIdentifier
@property (readonly, copy) NSUUID *uuid;
@property (copy) NSString *walletKeyDescription; // ivar: _walletKeyDescription


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPKPass:(id)arg0 ;
-(id)initWithTypeIdentifier:(id)arg0 serialNumber:(id)arg1 state:(NSInteger)arg2 walletKeyDescription:(id)arg3 homeName:(id)arg4 color:(NSInteger)arg5 nfcInfo:(id)arg6 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)xpcWalletKeyWithExpressEnabled:(BOOL)arg0 ;


@end


#endif