// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSNOTIFICATIONMUTESETTINGSMANAGER_H
#define BPSNOTIFICATIONMUTESETTINGSMANAGER_H

@class NSMutableDictionary, NPSManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BPSNotificationMuteSettingsManager : NSObject {
    NSMutableDictionary *_mutedSectionIdentifiersForDay;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedNotificationMuteSettingsManager;
-(BOOL)isMutedForTodaySectionIdentifier:(id)arg0 ;
-(id)init;
-(id)mutedForTodaySectionIdentifiers;
-(void)_loadMutedSectionIdentifiers;
-(void)_queue_sync;
-(void)_updateObservers;
-(void)addSectionIdentifiers:(id)arg0 ;
-(void)dealloc;
-(void)removeSectionIdentifiers:(id)arg0 ;


@end


#endif