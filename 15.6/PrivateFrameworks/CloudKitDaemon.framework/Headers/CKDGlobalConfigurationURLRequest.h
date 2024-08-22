// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDGLOBALCONFIGURATIONURLREQUEST_H
#define CKDGLOBALCONFIGURATIONURLREQUEST_H



#import "CKDURLRequest.h"
#import "CKDServerConfiguration.h"

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration; // ivar: _configuration


-(BOOL)allowsAnonymousAccount;
-(BOOL)hasRequestBody;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(NSInteger)partitionType;
-(NSInteger)serverType;
-(id)additionalHeaderValues;
-(id)httpMethod;
-(id)url;
-(void)requestDidParsePlistObject:(id)arg0 ;


@end


#endif