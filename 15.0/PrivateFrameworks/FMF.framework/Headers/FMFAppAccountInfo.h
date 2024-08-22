// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMFAPPACCOUNTINFO_H
#define FMFAPPACCOUNTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FMFAppAccountInfo : NSObject

@property (retain, nonatomic) NSString *appAuthToken; // ivar: _appAuthToken
@property (nonatomic) NSInteger appAuthTokenStatus; // ivar: _appAuthTokenStatus
@property (retain, nonatomic) NSString *appServerHost; // ivar: _appServerHost
@property (retain, nonatomic) NSString *dsid; // ivar: _dsid
@property (retain, nonatomic) NSString *legacyDsid; // ivar: _legacyDsid
@property (retain, nonatomic) NSString *legacyUsername; // ivar: _legacyUsername
@property (retain, nonatomic) NSString *username; // ivar: _username


-(id)description;


@end


#endif