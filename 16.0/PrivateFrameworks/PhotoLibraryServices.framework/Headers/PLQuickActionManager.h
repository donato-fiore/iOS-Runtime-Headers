// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLQUICKACTIONMANAGER_H
#define PLQUICKACTIONMANAGER_H

@class NSOperationQueue, SBSApplicationShortcutService, NSData;

#import <Foundation/Foundation.h>

#import "PLDatabaseContext.h"

@interface PLQuickActionManager : NSObject {
    id *_cameraWellObserver;
    NSOperationQueue *_operationQueue;
    PLDatabaseContext *_databaseContext;
}


@property (retain, nonatomic, setter=_setSBSApplicationShortcutCustomImageIconClass:) Class _SBSApplicationShortcutCustomImageIconClass; // ivar: __SBSApplicationShortcutCustomImageIconClass
@property (retain, nonatomic, setter=_setSBSApplicationShortcutItemClass:) Class _SBSApplicationShortcutItemClass; // ivar: __SBSApplicationShortcutItemClass
@property (retain, nonatomic, setter=_setSBSApplicationShortcutServiceClass:) Class _SBSApplicationShortcutServiceClass; // ivar: __SBSApplicationShortcutServiceClass
@property (retain, nonatomic, setter=_setAppShortcutService:) SBSApplicationShortcutService *_appShortcutService; // ivar: __appShortcutService
@property (retain, nonatomic, setter=_setCachedMostRecentPhotoData:) NSData *_cachedMostRecentPhotoData; // ivar: __cachedMostRecentPhotoData
@property (nonatomic, setter=_setMostRecentPhotoIsInvalid:) BOOL _mostRecentPhotoIsInvalid; // ivar: __mostRecentPhotoIsInvalid


-(BOOL)_userHasPhotos;
-(BOOL)_userHasPhotosFromLastYear;
-(id)_buildFavoritesQuickAction;
-(id)_buildMostRecentPhotoQuickAction;
-(id)_buildOneYearAgoQuickAction;
-(id)_buildSearchQuickAction;
-(id)_shortcutSystemImageNamed:(id)arg0 ;
-(id)initWithDatabaseContext:(id)arg0 ;
-(void)buildQuickActionItems;
-(void)cameraPreviewWellImageDidChange;
-(void)dealloc;


@end


#endif