// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCLOUDAPPACCESSRESOURCE_H
#define WFCLOUDAPPACCESSRESOURCE_H

@class NSArray;


#import "WFAccountAccessResource.h"

@interface WFCloudAppAccessResource : WFAccountAccessResource

@property (readonly, copy, nonatomic) NSArray *accounts;


+(void)accountInformationRetrievalSucceeded:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2 ;
+(void)getAccountWithUsername:(id)arg0 password:(id)arg1 completionHandler:(id)arg2 ;
+(void)requestDidFailWithError:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(Class)accountClass;
-(id)icon;
-(id)name;


@end


#endif