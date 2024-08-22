// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDSAVEUSERPRIVACYSETTINGSURLREQUEST_H
#define CKDSAVEUSERPRIVACYSETTINGSURLREQUEST_H

@class NSString;


#import "CKDURLRequest.h"

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) NSInteger discoverableTrinary; // ivar: _discoverableTrinary


-(BOOL)requiresTokenRegistration;
-(NSInteger)databaseScope;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)setDiscoverable:(BOOL)arg0 ;


@end


#endif