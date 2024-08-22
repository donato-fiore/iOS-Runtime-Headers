// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDTOKENREGISTRATIONURLREQUEST_H
#define CKDTOKENREGISTRATIONURLREQUEST_H

@class NSString, NSData;


#import "CKDURLRequest.h"

@interface CKDTokenRegistrationURLRequest : CKDURLRequest

@property (retain, nonatomic) NSString *apsEnvironmentString; // ivar: _apsEnvironmentString
@property (retain, nonatomic) NSData *apsToken; // ivar: _apsToken
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) BOOL skipBundleIDCheck; // ivar: _skipBundleIDCheck


-(BOOL)requiresTokenRegistration;
-(id)applicationBundleIdentifierForContainerAccess;
-(id)applicationBundleIdentifierForNetworkAttribution;
-(id)flowControlKey;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 apsToken:(id)arg1 apsEnvironmentString:(id)arg2 bundleID:(id)arg3 skipBundleIDCheck:(BOOL)arg4 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)sourceApplicationSecondaryIdentifier;


@end


#endif