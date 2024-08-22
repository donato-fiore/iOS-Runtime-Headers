// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPTOLIBRARYINFO_H
#define NPTOLIBRARYINFO_H

@class NSURL, NSDictionary, NSDate;

#import <Foundation/Foundation.h>

#import "NPTONotificationCenter.h"
#import "NPTOPreferencesAccessor.h"

@interface NPTOLibraryInfo : NSObject {
    NSURL *_libraryURL;
    NPTONotificationCenter *_notificationCenter;
    NPTOPreferencesAccessor *_legacyPreferencesAccessor;
}


@property (retain, nonatomic) NSDictionary *collectionTargetMap;
@property (readonly, nonatomic) NSDate *lastUpdatedDate;
@property (nonatomic, getter=isSyncing) BOOL syncing;


-(BOOL)isSyncNeeded;
-(id)collectionTargetMapChangeObserverWithQueue:(id)arg0 block:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)syncNeededChangeObserverWithQueue:(id)arg0 block:(id)arg1 ;
-(id)syncingChangeObserverWithQueue:(id)arg0 block:(id)arg1 ;
-(void)setSyncNeeded;


@end


#endif