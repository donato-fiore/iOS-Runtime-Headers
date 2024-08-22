// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHREGISTEREDBUNDLEIDSURLREQUEST_H
#define CKDFETCHREGISTEREDBUNDLEIDSURLREQUEST_H



#import "CKDURLRequest.h"

@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest

@property (copy, nonatomic) id *bundleIDsFetchedBlock; // ivar: _bundleIDsFetchedBlock


-(BOOL)requiresTokenRegistration;
-(id)applicationBundleIdentifierForContainerAccess;
-(id)applicationBundleIdentifierForNetworkAttribution;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)sourceApplicationSecondaryIdentifier;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif