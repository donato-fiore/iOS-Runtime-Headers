// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCSTOMBSTONESCOLLECTION_H
#define GCSTOMBSTONESCOLLECTION_H

@class NSArray;
@protocol GCSTombstones, GCUserDefaults, GCSSettingsStoreService;

#import <Foundation/Foundation.h>


@interface GCSTombstonesCollection : NSObject <GCSTombstones>

 {
    id<GCUserDefaults> *_userDefaults;
}


@property (readonly, weak, nonatomic) NSObject<GCSSettingsStoreService> *settingsStore; // ivar: _settingsStore
@property (retain, nonatomic) NSArray *values; // ivar: _values


-(BOOL)storeVersionIsCompatible;
-(id)initWithSettingsStore:(id)arg0 userDefaults:(id)arg1 ;
-(id)tombstoneForIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateTombstones:(id)arg0 ;


@end


#endif