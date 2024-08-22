// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLPRFAPPCONDUITAPPLICATIONLIBRARY_H
#define CSLPRFAPPCONDUITAPPLICATIONLIBRARY_H

@class NRDevice, NSMutableDictionary, NSArray, NSDictionary, NSString;
@protocol ACXDeviceConnectionDelegate, CSLPRFApplicationLibrary;

#import <Foundation/Foundation.h>

#import "CSLPRFObservationHelper.h"

@interface CSLPRFAppConduitApplicationLibrary : NSObject <ACXDeviceConnectionDelegate, CSLPRFApplicationLibrary>

 {
    NRDevice *_pairedWatch;
    CSLPRFObservationHelper *_observationHelper;
    NSMutableDictionary *_lock_cachedApplications;
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
-(void)removeObserver:(id)arg0 ;


@end


#endif