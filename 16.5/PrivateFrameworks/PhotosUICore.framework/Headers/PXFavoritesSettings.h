// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFAVORITESSETTINGS_H
#define PXFAVORITESSETTINGS_H

@class NSArray;
@protocol PXFavoritesSettingsDelegate;


#import "PXSettings.h"

@interface PXFavoritesSettings : PXSettings {
    BOOL _didEncounterUnknownSettingsClassName;
}


@property (weak, nonatomic) NSObject<PXFavoritesSettingsDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *favoritesSettingsClassNames; // ivar: _favoritesSettingsClassNames


+(id)favoritesSubmoduleWithFavoritesSettingsKeyPath:(id)arg0 delegate:(id)arg1 ;
+(id)sharedInstance;
+(id)transientProperties;
-(BOOL)isFavoriteSettings:(id)arg0 ;
-(id)_keyForFavoriteExistingAtIndex:(NSInteger)arg0 ;
-(id)_keyForFavoriteNameAtIndex:(NSInteger)arg0 ;
-(id)parentSettings;
-(id)valueForKey:(id)arg0 ;
-(void)_notifyChange;
-(void)_performBlockAfterLoadingAccessorySettings:(id)arg0 ;
-(void)_requestFavoriteSettingsAtIndex:(NSInteger)arg0 fromViewController:(id)arg1 resultHandler:(id)arg2 ;
-(void)setIsFavorite:(BOOL)arg0 settings:(id)arg1 ;


@end


#endif