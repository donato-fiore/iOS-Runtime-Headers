// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSDEVICEIDENTIFIERCACHE_H
#define _LSDEVICEIDENTIFIERCACHE_H

@class NSDictionary, NSUUID, NSURL, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LSDeviceIdentifierCache : NSObject {
    NSDictionary *_identifiers;
    NSUUID *_advertiserIdentifier;
    NSUUID *_vendorIdentifierSeed;
    NSObject<OS_dispatch_queue> *_queue;
    int _saveFlag;
    NSDictionary *_perUserEntropy;
    NSURL *_identifiersFileURL;
}


@property (readonly) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (readonly) NSObject<OS_dispatch_queue> *queue;


-(BOOL)deviceUnlockedSinceBoot;
-(id)allIdentifiersNotDispatched;
-(id)applyPerUserEntropyNotDispatched:(id)arg0 type:(NSInteger)arg1 ;
-(id)deviceIdentifierVendorSeed;
-(id)extractUUIDForKey:(id)arg0 ;
-(id)generateSomePerUserEntropyNotDispatched;
-(id)identifiersOfTypeNotDispatched:(NSInteger)arg0 ;
-(id)initWithPersona:(id)arg0 ;
-(void)clearAllIdentifiersOfType:(NSInteger)arg0 ;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)generatePerUserEntropyIfNeededNotDispatched;
-(void)getIdentifierOfType:(NSInteger)arg0 vendorName:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)save;


@end


#endif