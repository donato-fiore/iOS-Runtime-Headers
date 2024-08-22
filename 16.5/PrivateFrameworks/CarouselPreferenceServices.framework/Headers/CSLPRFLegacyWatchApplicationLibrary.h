// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFLEGACYWATCHAPPLICATIONLIBRARY_H
#define CSLPRFLEGACYWATCHAPPLICATIONLIBRARY_H

@class NRDevice, NSMutableDictionary, NSArray, NSDictionary, NSString;
@protocol ACXDeviceConnectionDelegate, CSLPRFNanoAppRegistryApplicationSourceDelegate, CSLPRFApplicationLibrary;

#import <Foundation/Foundation.h>

#import "CSLPRFNanoAppRegistryApplicationSource.h"
#import "CSLPRFObservationHelper.h"

@interface CSLPRFLegacyWatchApplicationLibrary : NSObject <ACXDeviceConnectionDelegate, CSLPRFNanoAppRegistryApplicationSourceDelegate, CSLPRFApplicationLibrary>

 {
    CSLPRFNanoAppRegistryApplicationSource *_nanoAppRegistrySource;
    NRDevice *_pairedWatch;
    CSLPRFObservationHelper *_observationHelper;
    NSMutableDictionary *_lock_cachedApplications;
    NSMutableDictionary *_lock_firstPartyApplications;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *allApplications;
@property (readonly, nonatomic) NSDictionary *allApplicationsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)applicationWithBundleIdentifier:(id)arg0 ;
-(id)initWithPairedWatch:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)allApplicationsWithCompletion:(id)arg0 ;
-(void)applicationWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)applicationsInstalled:(id)arg0 onDeviceWithPairingID:(id)arg1 ;
-(void)applicationsUninstalled:(id)arg0 onDeviceWithPairingID:(id)arg1 ;
-(void)applicationsUpdated:(id)arg0 onDeviceWithPairingID:(id)arg1 ;
-(void)dealloc;
-(void)nanoRegistrySource:(id)arg0 updatedWithAllApplications:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif