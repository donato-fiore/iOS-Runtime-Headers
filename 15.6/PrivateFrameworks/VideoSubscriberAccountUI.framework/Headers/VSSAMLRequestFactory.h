// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSSAMLREQUESTFACTORY_H
#define VSSAMLREQUESTFACTORY_H


#import <Foundation/Foundation.h>


@interface VSSAMLRequestFactory : NSObject



+(id)attributeQueryWithAttributeNames:(id)arg0 channelID:(id)arg1 authNResponse:(id)arg2 error:(*id)arg3 ;
+(id)authNRequestWithResponse:(id)arg0 forced:(BOOL)arg1 error:(*id)arg2 ;
+(id)logoutRequestWithError:(*id)arg0 ;


@end


#endif