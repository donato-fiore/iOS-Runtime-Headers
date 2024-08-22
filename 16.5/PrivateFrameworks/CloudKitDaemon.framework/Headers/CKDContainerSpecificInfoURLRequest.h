// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDCONTAINERSPECIFICINFOURLREQUEST_H
#define CKDCONTAINERSPECIFICINFOURLREQUEST_H

@class NSString;


#import "CKDURLRequest.h"
#import "CKDContainerServerInfo.h"

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (copy, nonatomic) CKDContainerServerInfo *containerServerInfo; // ivar: _containerServerInfo
@property (nonatomic) BOOL requireUserIDs; // ivar: _requireUserIDs


-(BOOL)allowsAnonymousAccount;
-(BOOL)allowsAuthedAccount;
-(BOOL)hasRequestBody;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)usesCloudKitAuthToken;
-(BOOL)usesiCloudAuthToken;
-(NSInteger)partitionType;
-(NSInteger)serverType;
-(id)initWithOperation:(id)arg0 containerIdentifier:(id)arg1 ;
-(id)url;
-(void)requestDidParseJSONObject:(id)arg0 ;


@end


#endif