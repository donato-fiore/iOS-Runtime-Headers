// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSUBSCRIPTIONENTITLEMENTSRESULT_H
#define AMSSUBSCRIPTIONENTITLEMENTSRESULT_H

@class NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSSubscriptionEntitlementsResult : NSObject

@property (retain, nonatomic) NSNumber *appAdamId; // ivar: _appAdamId
@property (retain, nonatomic) NSNumber *appVersion; // ivar: _appVersion
@property (retain, nonatomic) NSDictionary *entitlements; // ivar: _entitlements
@property (retain, nonatomic) NSDictionary *serverResponse; // ivar: _serverResponse


-(BOOL)isEqual:(id)arg0 ;
-(id)exportObject;


@end


#endif