// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKUSERSETTINGS_H
#define WLKUSERSETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKUserSettings : NSObject

@property (readonly, nonatomic) BOOL activeUser; // ivar: _activeUser
@property (readonly, nonatomic) BOOL ageVerified; // ivar: _ageVerified
@property (readonly, copy, nonatomic) NSString *country; // ivar: _country
@property (readonly, nonatomic) BOOL favoritesSyncEnabled; // ivar: _favoritesSyncEnabled
@property (readonly, nonatomic) BOOL globalAccountConsent; // ivar: _globalAccountConsent


-(id)_data;
-(id)_jsonDictionary;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFavoritesSyncEnabled:(BOOL)arg0 ;


@end


#endif