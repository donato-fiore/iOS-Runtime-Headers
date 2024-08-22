// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STUSERDATA_H
#define STUSERDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface STUserData : NSObject

@property (readonly, nonatomic) BOOL checkForUnsafePhotos; // ivar: _checkForUnsafePhotos
@property (readonly, nonatomic) NSString *familyMemberType; // ivar: _familyMemberType
@property (readonly, copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly, nonatomic) BOOL hasPasscode; // ivar: _hasPasscode
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCommunicationSafetyAnalyticsEnabled; // ivar: _isCommunicationSafetyAnalyticsEnabled
@property (readonly, nonatomic) BOOL isCommunicationSafetyNotificationEnabled; // ivar: _isCommunicationSafetyNotificationEnabled
@property (readonly, nonatomic) BOOL isParent; // ivar: _isParent
@property (readonly, nonatomic) BOOL isRemote; // ivar: _isRemote
@property (readonly, nonatomic) BOOL screenTimeEnabled; // ivar: _screenTimeEnabled
@property (readonly, nonatomic) BOOL syncingEnabled; // ivar: _syncingEnabled


-(id)initWithIdentifier:(id)arg0 givenName:(id)arg1 isParent:(BOOL)arg2 isRemote:(BOOL)arg3 hasPasscode:(BOOL)arg4 screenTimeEnabled:(BOOL)arg5 syncingEnabled:(BOOL)arg6 checkForUnsafePhotos:(BOOL)arg7 communicationSafetyNotificationEnabled:(BOOL)arg8 communicationSafetyAnalyticsEnabled:(BOOL)arg9 familyMemberType:(id)arg10 ;


@end


#endif