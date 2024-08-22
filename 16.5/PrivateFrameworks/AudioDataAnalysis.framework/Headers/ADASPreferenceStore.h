// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADASPREFERENCESTORE_H
#define ADASPREFERENCESTORE_H

@class NPSDomainAccessor, NSDictionary;

#import <Foundation/Foundation.h>


@interface ADASPreferenceStore : NSObject {
    os_unfair_lock_s _npsDomainLock;
}


@property (retain, nonatomic) NPSDomainAccessor *coreAudioDeviceDomain; // ivar: _coreAudioDeviceDomain
@property (retain, nonatomic) NPSDomainAccessor *coreAudioDomain; // ivar: _coreAudioDomain
@property (readonly, nonatomic) NSDictionary *defaultValues; // ivar: _defaultValues
@property (readonly, nonatomic) NSDictionary *keyMap; // ivar: _keyMap
@property (readonly, nonatomic) NSDictionary *specialDarwinKeys; // ivar: _specialDarwinKeys


+(id)sharedInstance;
-(id)init;
-(void)initNPSDomain;
-(void)pairedDeviceStateChanged:(id)arg0 ;
-(void)registerForNotifications;


@end


#endif