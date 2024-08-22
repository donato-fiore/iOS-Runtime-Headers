// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTMUTESYNC_H
#define BLTMUTESYNC_H

@class NSMutableDictionary, NPSManager, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLTMuteSync : NSObject {
    NSMutableDictionary *_mutedSectionIdentifiersForDay;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSSet *mutedForTodaySectionIdentifiers;


-(BOOL)isMutedForTodaySectionIdentifier:(id)arg0 ;
-(id)init;
-(void)_cleanMuteIdentifiers;
-(void)_loadMutedSectionIdentifiers;
-(void)_queue_sync;
-(void)_updateObservers;
-(void)addSectionIdentifiers:(id)arg0 ;
-(void)dealloc;
-(void)removeSectionIdentifiers:(id)arg0 ;


@end


#endif