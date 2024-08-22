// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDTOKENDELETIONURLREQUEST_H
#define CKDTOKENDELETIONURLREQUEST_H

@class NSString, NSData;


#import "CKDURLRequest.h"

@interface CKDTokenDeletionURLRequest : CKDURLRequest

@property (retain, nonatomic) NSString *apsEnvironmentString; // ivar: _apsEnvironmentString
@property (retain, nonatomic) NSData *apsToken; // ivar: _apsToken
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID


-(BOOL)requiresTokenRegistration;
-(id)applicationBundleIdentifierForContainerAccess;
-(id)applicationBundleIdentifierForNetworkAttribution;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 apsToken:(id)arg1 apsEnvironmentString:(id)arg2 bundleID:(id)arg3 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)sourceApplicationSecondaryIdentifier;


@end


#endif