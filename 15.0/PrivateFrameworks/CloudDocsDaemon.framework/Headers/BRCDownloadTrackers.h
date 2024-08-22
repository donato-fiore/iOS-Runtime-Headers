// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCDOWNLOADTRACKERS_H
#define BRCDOWNLOADTRACKERS_H

@class NSMutableDictionary, NSMapTable;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"

@interface BRCDownloadTrackers : NSObject {
    BRCAccountSession *_session;
    NSMutableDictionary *_trackersByDocID;
    NSMapTable *_docIDsByTracker;
}




-(BOOL)hasPendingTrackerForDocumentID:(id)arg0 ;
-(NSUInteger)spaceRequiredForTrackers;
-(id)initWithSession:(id)arg0 ;
-(void)addDownloadTracker:(id)arg0 forItemWithDocID:(id)arg1 ;
-(void)document:(id)arg0 didCompleteDownloadWithError:(id)arg1 ;
-(void)removeDownloadTracker:(id)arg0 ;


@end


#endif