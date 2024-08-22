// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKPROXIEDCLIENTCONTEXT_H
#define AKPROXIEDCLIENTCONTEXT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AKProxiedClientContext : NSObject

@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (copy, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) BOOL isRapportLogin; // ivar: _isRapportLogin
@property (nonatomic) BOOL shouldSkipAuthorizationUI; // ivar: _shouldSkipAuthorizationUI
@property (copy, nonatomic) NSString *teamID; // ivar: _teamID




@end


#endif