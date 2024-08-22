// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15FOCUSSETTINGSUI24WATCHFACESETTINGSMANAGER_H
#define _TTC15FOCUSSETTINGSUI24WATCHFACESETTINGSMANAGER_H

@protocol NTKFaceCollectionObserver;

#import <Foundation/Foundation.h>


@interface _TtC15FocusSettingsUI24WatchFaceSettingsManager : NSObject <NTKFaceCollectionObserver>

 {
    ? collection;
    ? snapshotter;
    ? onLoad;
    ? faceImagesCache;
    ? $__lazy_storage_$_watchNPSManager;
    ? _watchFaceDomainAccessor;
}




-(id)init;
-(void)faceCollectionDidLoad:(id)arg0 ;


@end


#endif