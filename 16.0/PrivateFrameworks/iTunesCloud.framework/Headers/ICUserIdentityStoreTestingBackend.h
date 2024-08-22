// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICUSERIDENTITYSTORETESTINGBACKEND_H
#define ICUSERIDENTITYSTORETESTINGBACKEND_H

@class NSNumber, NSMutableDictionary, NSString;
@protocol ICUserIdentityStoreBackend, ICUserIdentityStoreBackendDelegate;

#import <Foundation/Foundation.h>

#import "ICLocalStoreAccountProperties.h"

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend>

 {
    NSNumber *_activeAccountDSID;
    NSNumber *_activeLockerAccountDSID;
    NSMutableDictionary *_identityProperties;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICUserIdentityStoreBackendDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)defaultActiveAccountDSID;
+(id)defaultActiveLockerAccountDSID;
+(id)defaultStorefrontIdentifier;
+(void)setDefaultActiveAccountDSID:(id)arg0 ;
+(void)setDefaultActiveLockerAccountDSID:(id)arg0 ;
+(void)setDefaultStorefrontIdentifier:(id)arg0 ;
-(BOOL)disableLockerAccountDSID:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceIdentityProperties:(id)arg0 forDSID:(id)arg1 error:(*id)arg2 ;
-(BOOL)setIdentityProperties:(id)arg0 forDSID:(id)arg1 error:(*id)arg2 ;
-(BOOL)setLocalStoreAccountProperties:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateActiveAccountDSID:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateActiveLockerAccountDSID:(id)arg0 error:(*id)arg1 ;
-(id)_propertiesToSaveForProperties:(id)arg0 ;
-(id)activeAccountDSIDWithError:(*id)arg0 ;
-(id)activeLockerAccountDSIDWithError:(*id)arg0 ;
-(id)allManageableStoreAccountDSIDsWithError:(*id)arg0 ;
-(id)allStoreAccountDSIDsWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identityPropertiesForDSID:(id)arg0 error:(*id)arg1 ;
-(id)identityPropertiesForPrimaryICloudAccountWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localStoreAccountPropertiesWithError:(*id)arg0 ;
-(id)verificationContextForAccountEstablishmentWithError:(*id)arg0 ;
-(id)verificationContextForDSID:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeIdentityForDSID:(id)arg0 completion:(id)arg1 ;
-(void)synchronize;


@end


#endif