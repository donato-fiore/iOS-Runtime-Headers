// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEODATAURLSESSIONLIST_H
#define GEODATAURLSESSIONLIST_H

@class NSMutableArray, NSMapTable;

#import <Foundation/Foundation.h>


@interface GEODataURLSessionList : NSObject {
    NSMutableArray *_urlSessions;
    NSMutableArray *_lastUsedDates;
    NSMapTable *_pendingInvalidationGroups;
}


@property (readonly, nonatomic) NSUInteger count;


-(id)init;
-(id)urlSessionForIdentifier:(id)arg0 ;
-(id)urlSessionForRequest:(id)arg0 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)addSession:(id)arg0 ;
// -(void)finishTasksAndInvalidateSessionsMatching:(id)arg0 group:(unk)arg1  ;
-(void)pruneSessionsNotInIdentifierArray:(id)arg0 agressive:(BOOL)arg1 ;


@end


#endif