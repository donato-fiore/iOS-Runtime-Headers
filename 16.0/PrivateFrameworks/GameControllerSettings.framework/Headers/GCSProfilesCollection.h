// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCSPROFILESCOLLECTION_H
#define GCSPROFILESCOLLECTION_H

@class NSArray;
@protocol GCSProfiles, GCUserDefaults, GCSSettingsStoreService;

#import <Foundation/Foundation.h>


@interface GCSProfilesCollection : NSObject <GCSProfiles>

 {
    id<GCUserDefaults> *_userDefaults;
}


@property (readonly, weak, nonatomic) NSObject<GCSSettingsStoreService> *settingsStore; // ivar: _settingsStore
@property (retain, nonatomic) NSArray *values; // ivar: _values


-(BOOL)storeVersionIsCompatible;
-(id)initWithSettingsStore:(id)arg0 userDefaults:(id)arg1 ;
-(id)profileForIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateProfiles:(id)arg0 ;


@end


#endif