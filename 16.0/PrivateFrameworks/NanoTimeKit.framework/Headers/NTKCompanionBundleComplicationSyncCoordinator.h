// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOMPANIONBUNDLECOMPLICATIONSYNCCOORDINATOR_H
#define NTKCOMPANIONBUNDLECOMPLICATIONSYNCCOORDINATOR_H

@class NSString;
@protocol NTKComplicationCollectionObserver;

#import <Foundation/Foundation.h>

#import "NTKComplicationCollection.h"

@interface NTKCompanionBundleComplicationSyncCoordinator : NSObject <NTKComplicationCollectionObserver>

 {
    os_unfair_lock_s _lock;
    NTKComplicationCollection *_complicationCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL loaded; // ivar: _loaded
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)descriptorsForBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)_lock_updateLoaded;
-(void)activeDeviceChanged;
-(void)complicationCollection:(id)arg0 didUpdateComplicationDescriptorsForClient:(id)arg1 ;
-(void)complicationCollectionDidLoad:(id)arg0 ;
-(void)complicationCollectionDidReload:(id)arg0 ;
-(void)dealloc;


@end


#endif