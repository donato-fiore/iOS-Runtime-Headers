// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CFXPREFERENCESHANDLE_H
#define _CFXPREFERENCESHANDLE_H


#import <Foundation/Foundation.h>

#import "_CFXPreferences.h"

@interface _CFXPreferencesHandle : NSObject {
    _CFXPreferences *prefs;
    os_unfair_lock_s lock;
    unsigned int overrideEUID;
}




-(id)copyPrefs;
-(id)init;
-(void)dealloc;
-(void)setEUIDOverride:(unsigned int)arg0 ;


@end


#endif