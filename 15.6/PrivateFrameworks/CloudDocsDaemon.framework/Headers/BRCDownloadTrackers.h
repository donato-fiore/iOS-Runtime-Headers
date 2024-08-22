// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCDOWNLOADTRACKERS_H
#define BRCDOWNLOADTRACKERS_H

@class NSMutableDictionary, NSMapTable;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"

@interface BRCDownloadTrackers : NSObject {
    NSMutableDictionary *_trackersByFileObjectID;
    NSMapTable *_fileObjectIDsByTracker;
}


@property (readonly, weak, nonatomic) BRCAccountSession *session; // ivar: _session


-(BOOL)hasPendingTrackerForFileObjectID:(id)arg0 ;
-(NSUInteger)spaceRequiredForTrackers;
-(id)initWithSession:(id)arg0 ;
-(id)trackedFileObjectIDs;
-(void)addDownloadTracker:(id)arg0 forFileObjectID:(id)arg1 ;
-(void)document:(id)arg0 didCompleteDownloadWithError:(id)arg1 ;
-(void)removeDownloadTracker:(id)arg0 ;


@end


#endif