// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCSGAMESCOLLECTION_H
#define GCSGAMESCOLLECTION_H

@class NSArray;
@protocol GCSGames, GCUserDefaults, GCSSettingsStoreService;

#import <Foundation/Foundation.h>

#import "GCSGame.h"

@interface GCSGamesCollection : NSObject <GCSGames>

 {
    id<GCUserDefaults> *_userDefaults;
    GCSGame *_defaultGame;
}


@property (readonly, weak, nonatomic) NSObject<GCSSettingsStoreService> *settingsStore; // ivar: _settingsStore
@property (retain, nonatomic) NSArray *values; // ivar: _values


-(BOOL)storeVersionIsCompatible;
-(id)gameForPersistentControllerIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 ;
-(id)initWithSettingsStore:(id)arg0 userDefaults:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateGames:(id)arg0 ;


@end


#endif