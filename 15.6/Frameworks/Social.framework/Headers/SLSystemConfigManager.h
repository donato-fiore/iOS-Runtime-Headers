// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLSYSTEMCONFIGMANAGER_H
#define SLSYSTEMCONFIGMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SLSystemConfigManager : NSObject {
    *void _prefs;
    BOOL _notifyForExternalChangeOnly;
    int _applySkipCount;
    NSString *_serviceType;
}




+(id)sharedInstanceForCallbackWhileLocked:(*void)arg0 ;
+(id)sharedInstanceForServiceType:(id)arg0 ;
-(*void)_getValueForKey:(id)arg0 ;
-(id)cachedUsername;
-(id)initWithServiceType:(id)arg0 ;
-(void)_initializeSystemConfigPrefs:(id)arg0 ;
-(void)_keepAlive;
-(void)_notifyTarget:(unsigned int)arg0 ;
-(void)_refresh;
-(void)_setCallback:(*unk)arg0 withContext:(struct ? *)arg1 ;
-(void)_setValue:(*void)arg0 forKey:(id)arg1 ;
-(void)_synchronize;
-(void)_tearDown;
-(void)dealloc;
-(void)setCachedUsername:(id)arg0 ;


@end


#endif