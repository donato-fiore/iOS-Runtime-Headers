// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPCLOUDKITACCOUNTACCESS_H
#define MSPCLOUDKITACCOUNTACCESS_H

@class CKContainer, NSString;

#import <Foundation/Foundation.h>


@interface MSPCloudKitAccountAccess : NSObject {
    CKContainer *_container;
    CKContainer *_containerWithZoneWidePCS;
    CKContainer *_secureContainer;
    CKContainer *_secureContainerWithZoneWidePCS;
}


@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL disableDeviceToDeviceEncryption; // ivar: _disableDeviceToDeviceEncryption
@property (nonatomic) BOOL useSecureContainer; // ivar: _useSecureContainer


+(BOOL)hasCloudKitEntitlement;
+(BOOL)useLongLivedOperations;
+(NSInteger)containerEnvironmentForAccessEnvironment:(NSInteger)arg0 ;
+(NSInteger)defaultEnvironment;
+(id)sharedAccess;
+(void)fetchDeviceToDeviceEncryptionStatus:(id)arg0 ;
-(id)containerForAccount;
-(id)containerWithZoneWidePCS:(BOOL)arg0 ;
-(id)description;
-(id)initWithEnvironment:(NSInteger)arg0 ;
-(id)initWithEnvironment:(NSInteger)arg0 createContainers:(BOOL)arg1 ;
-(void)fetchAccountIdentifierWithCompletion:(id)arg0 ;
-(void)fetchAccountStatus:(id)arg0 ;
-(void)fetchDeviceToDeviceEncryptionStatus:(id)arg0 ;


@end


#endif