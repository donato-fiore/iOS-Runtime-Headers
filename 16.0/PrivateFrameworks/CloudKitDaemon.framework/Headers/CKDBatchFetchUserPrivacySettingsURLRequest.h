// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDBATCHFETCHUSERPRIVACYSETTINGSURLREQUEST_H
#define CKDBATCHFETCHUSERPRIVACYSETTINGSURLREQUEST_H

@class NSArray;


#import "CKDURLRequest.h"

@interface CKDBatchFetchUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *containerPrivacySettings; // ivar: _containerPrivacySettings


-(BOOL)requiresTokenRegistration;
-(NSInteger)databaseScope;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;


@end


#endif