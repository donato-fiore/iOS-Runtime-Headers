// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSIDENTITYPROVIDERCHANNELAPPSRESPONSE_H
#define VSIDENTITYPROVIDERCHANNELAPPSRESPONSE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface VSIdentityProviderChannelAppsResponse : NSObject

@property (copy, nonatomic) NSArray *allApps; // ivar: _allApps
@property (copy, nonatomic) NSDictionary *appsByChannelID; // ivar: _appsByChannelID


-(id)init;


@end


#endif