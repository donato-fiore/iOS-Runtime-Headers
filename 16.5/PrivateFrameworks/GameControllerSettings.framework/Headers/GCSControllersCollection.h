// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCSCONTROLLERSCOLLECTION_H
#define GCSCONTROLLERSCOLLECTION_H

@class NSArray;
@protocol GCSControllers, GCUserDefaults, GCSSettingsStoreService;

#import <Foundation/Foundation.h>


@interface GCSControllersCollection : NSObject <GCSControllers>

 {
    id<GCUserDefaults> *_userDefaults;
}


@property (readonly, weak, nonatomic) NSObject<GCSSettingsStoreService> *settingsStore; // ivar: _settingsStore
@property (retain, nonatomic) NSArray *values; // ivar: _values


-(BOOL)storeVersionIsCompatible;
-(id)controllerForPersistentIdentifier:(id)arg0 ;
-(id)initWithSettingsStore:(id)arg0 userDefaults:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateControllers:(id)arg0 ;


@end


#endif