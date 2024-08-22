// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDAPPLICATIONMETADATA_H
#define CKDAPPLICATIONMETADATA_H

@class NSString, CKEntitlements;

#import <Foundation/Foundation.h>


@interface CKDApplicationMetadata : NSObject

@property (nonatomic) NSInteger adopterProcessType; // ivar: _adopterProcessType
@property (retain, nonatomic) NSString *applicationContainerPath; // ivar: _applicationContainerPath
@property (nonatomic) unsigned int clientSDKVersion; // ivar: _clientSDKVersion
@property (retain, nonatomic) NSString *containingBundleID; // ivar: _containingBundleID
@property (retain, nonatomic) CKEntitlements *entitlements; // ivar: _entitlements
@property (nonatomic) BOOL isClientMainBundleAppleExecutable; // ivar: _isClientMainBundleAppleExecutable


-(id)init;


@end


#endif