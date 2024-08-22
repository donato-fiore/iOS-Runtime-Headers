// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHUSERPRIVACYSETTINGSURLREQUEST_H
#define CKDFETCHUSERPRIVACYSETTINGSURLREQUEST_H



#import "CKDURLRequest.h"
#import "CKDPUserPrivacySettings.h"

@interface CKDFetchUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // ivar: _userPrivacySettings


-(NSInteger)databaseScope;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;


@end


#endif