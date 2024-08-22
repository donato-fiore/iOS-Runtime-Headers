// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AALOGINRESPONSEICLOUDTOKENS_H
#define AALOGINRESPONSEICLOUDTOKENS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AALoginResponseiCloudTokens : NSObject

@property (readonly, nonatomic) NSString *authToken; // ivar: _authToken
@property (readonly, nonatomic) NSString *cloudKitToken; // ivar: _cloudKitToken
@property (readonly, nonatomic) NSString *fmfAppToken; // ivar: _fmfAppToken
@property (readonly, nonatomic) NSString *fmfToken; // ivar: _fmfToken
@property (readonly, nonatomic) NSString *fmipAppToken; // ivar: _fmipAppToken
@property (readonly, nonatomic) NSString *fmipAuthToken; // ivar: _fmipAuthToken
@property (readonly, nonatomic) NSString *fmipLostModeToken; // ivar: _fmipLostModeToken
@property (readonly, nonatomic) NSString *fmipSiriToken; // ivar: _fmipSiriToken
@property (readonly, nonatomic) NSString *keyTransparencyToken; // ivar: _keyTransparencyToken
@property (readonly, nonatomic) NSString *mapsToken; // ivar: _mapsToken
@property (readonly, nonatomic) NSString *mdmServerToken; // ivar: _mdmServerToken
@property (readonly, nonatomic) NSString *searchPartyToken; // ivar: _searchPartyToken


-(id)initWithTokens:(id)arg0 ;


@end


#endif