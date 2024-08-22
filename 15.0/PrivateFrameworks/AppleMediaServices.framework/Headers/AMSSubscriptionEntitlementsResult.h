// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSSUBSCRIPTIONENTITLEMENTSRESULT_H
#define AMSSUBSCRIPTIONENTITLEMENTSRESULT_H

@class NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSSubscriptionEntitlementsResult : NSObject

@property (retain, nonatomic) NSNumber *appAdamId; // ivar: _appAdamId
@property (retain, nonatomic) NSNumber *appVersion; // ivar: _appVersion
@property (retain, nonatomic) NSDictionary *entitlements; // ivar: _entitlements
@property (retain, nonatomic) NSDictionary *serverResponse; // ivar: _serverResponse


-(id)exportObject;


@end


#endif