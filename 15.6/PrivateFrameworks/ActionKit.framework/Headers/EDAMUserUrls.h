// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMUSERURLS_H
#define EDAMUSERURLS_H

@class NSString;


#import "FATObject.h"

@interface EDAMUserUrls : FATObject

@property (retain, nonatomic) NSString *communicationEngineUrl; // ivar: _communicationEngineUrl
@property (retain, nonatomic) NSString *messageStoreUrl; // ivar: _messageStoreUrl
@property (retain, nonatomic) NSString *noteStoreUrl; // ivar: _noteStoreUrl
@property (retain, nonatomic) NSString *userStoreUrl; // ivar: _userStoreUrl
@property (retain, nonatomic) NSString *userWebSocketUrl; // ivar: _userWebSocketUrl
@property (retain, nonatomic) NSString *utilityUrl; // ivar: _utilityUrl
@property (retain, nonatomic) NSString *webApiUrlPrefix; // ivar: _webApiUrlPrefix


+(id)structFields;
+(id)structName;


@end


#endif