// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHPLATFORMCORE25DISKHEALTHEXPERIENCESTORE_H
#define _TTC18HEALTHPLATFORMCORE25DISKHEALTHEXPERIENCESTORE_H

@class SwiftObject;



@interface _TtC18HealthPlatformCore25DiskHealthExperienceStore : SwiftObject {
    ? previousMergeFailed;
    ? fetchLimit;
    ? notificationManager;
    ? __sharedBackgroundContext;
    ? $__lazy_storage_$_allEntities;
    ? persistentHistoryToken;
    ? mergeExternalChangesQueue;
    ? mergeExternalChangesSubject;
    ? cancellables;
    ? overrideStoreLocation;
    ? $__lazy_storage_$_persistentContainer;
}




-(void)mergeExternalChanges;


@end


#endif