// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICUSERIDENTITY_H
#define ICUSERIDENTITY_H

@class NSString, NSNumber;
@protocol _MSVAccountInformationProviding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICUserIdentity : NSObject <_MSVAccountInformationProviding, NSCopying, NSSecureCoding>

 {
    NSString *_deviceIdentifier;
    BOOL _isEncodingUsingSpecificIdentityStore;
}


@property (readonly, copy, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (readonly, copy, nonatomic) NSString *accountDSID;
@property (readonly, nonatomic) BOOL allowsAccountEstablishment; // ivar: _allowsAccountEstablishment
@property (readonly, nonatomic) BOOL allowsDelegation; // ivar: _allowsDelegation
@property (readonly, nonatomic) NSUInteger creationTime; // ivar: _creationTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)activeAccount;
+(id)activeLockerAccount;
+(id)autoupdatingActiveAccount;
+(id)autoupdatingActiveLockerAccount;
+(id)carrierBundleWithDeviceIdentifier:(id)arg0 ;
+(id)nullIdentity;
+(id)specificAccountWithDSID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentity:(id)arg0 inStore:(id)arg1 ;
-(NSUInteger)hashInStore:(id)arg0 ;
-(id)_resolvedDSIDUsingSpecificIdentityStore:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identityAllowingDelegation:(BOOL)arg0 ;
-(id)identityAllowingEstablishment:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_ensureResolvedDSIDUsingSpecificIdentityStore:(id)arg0 ;
-(void)_performEncodingTaskUsingSpecificIdentityStore:(id)arg0 encodingHandler:(id)arg1 ;
-(void)_setResolvedDSID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif