// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEEXTENSIONUSERPREFERENCES_H
#define MEEXTENSIONUSERPREFERENCES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MEExtensionUserPreferences : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableDictionary *extensionIDToUserEnabledMap; // ivar: _extensionIDToUserEnabledMap


+(id)log;
+(id)sharedInstance;
-(BOOL)isExtensionEnabled:(id)arg0 ;
-(id)_loadUserPreferences;
-(id)_plistURL;
-(id)_prefsDictionary;
-(id)_serializedData;
-(void)_savePreferences;
-(void)setExtensionEnabled:(BOOL)arg0 forExtensionID:(id)arg1 ;


@end


#endif