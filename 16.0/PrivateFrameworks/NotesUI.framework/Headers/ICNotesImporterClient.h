// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTESIMPORTERCLIENT_H
#define ICNOTESIMPORTERCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICNotesImporterClient : NSObject {
    NSXPCConnection *_connectionToService;
}


@property (nonatomic) NSUInteger requestCount; // ivar: _requestCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue; // ivar: _requestCountQueue


-(id)init;
-(void)archiveEvernoteNotesFromBookmarkData:(id)arg0 completionBlock:(id)arg1 ;
-(void)cleanupArchiveId:(id)arg0 completionBlock:(id)arg1 ;
-(void)countEvernoteNotesFromBookmarkData:(id)arg0 completionBlock:(id)arg1 ;
-(void)parseHTMLStringFromEvernoteContentString:(id)arg0 completionBlock:(id)arg1 ;
-(void)parseTitleFromHTMLString:(id)arg0 completionBlock:(id)arg1 ;
-(void)resumeConnectionIfNeeded;
-(void)suspendConnectionIfNeeded;
-(void)unarchiveEvernoteNoteFromArchiveId:(id)arg0 noteArchiveId:(id)arg1 completionBlock:(id)arg2 ;
-(void)unarchiveEvernoteResourceFromArchiveId:(id)arg0 resourceArchiveId:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif