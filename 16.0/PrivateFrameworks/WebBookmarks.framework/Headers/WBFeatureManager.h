// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBFEATUREMANAGER_H
#define WBFEATUREMANAGER_H


#import <Foundation/Foundation.h>


@interface WBFeatureManager : NSObject

@property (readonly, nonatomic) NSInteger accessLevel; // ivar: _accessLevel
@property (readonly, nonatomic) BOOL favoritesFolderSelectionShouldSync; // ivar: _favoritesFolderSelectionShouldSync
@property (readonly, nonatomic, getter=isOfflineReadingListAvailable) BOOL offlineReadingListAvailable; // ivar: _offlineReadingListAvailable


+(id)sharedFeatureManager;
-(id)init;
-(void)_updateToAccessLevel:(NSInteger)arg0 ;


@end


#endif