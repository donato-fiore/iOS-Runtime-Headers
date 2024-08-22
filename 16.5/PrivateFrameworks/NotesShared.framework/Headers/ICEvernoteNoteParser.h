// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICEVERNOTENOTEPARSER_H
#define ICEVERNOTENOTEPARSER_H

@class NSMutableString, NSURL, NSMutableDictionary, NSString, NSMutableArray, NSError;
@protocol NSXMLParserDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "ICEvernoteNote.h"
#import "ICEvernoteResource.h"

@interface ICEvernoteNoteParser : NSObject <NSXMLParserDelegate>



@property (retain, nonatomic) NSMutableString *bufferString; // ivar: _bufferString
@property (nonatomic) NSInteger contentLevel; // ivar: _contentLevel
@property (retain, nonatomic) NSMutableString *contentString; // ivar: _contentString
@property (retain, nonatomic) NSURL *currentImportDirectory; // ivar: _currentImportDirectory
@property (retain, nonatomic) NSMutableDictionary *currentImportItem; // ivar: _currentImportItem
@property (retain, nonatomic) ICEvernoteNote *currentNote; // ivar: _currentNote
@property (retain, nonatomic) ICEvernoteResource *currentResource; // ivar: _currentResource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *importDirectory;
@property (retain, nonatomic) NSMutableArray *importItems; // ivar: _importItems
@property (nonatomic) NSUInteger noteCount; // ivar: _noteCount
@property (retain, nonatomic) NSMutableArray *notes; // ivar: _notes
@property (retain, nonatomic) NSError *parseError; // ivar: _parseError
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue; // ivar: _parseQueue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *parseSemaphore; // ivar: _parseSemaphore
@property (nonatomic) BOOL shouldCountOnly; // ivar: _shouldCountOnly
@property (nonatomic) BOOL shouldIgnoreCurrentNote; // ivar: _shouldIgnoreCurrentNote
@property (readonly) Class superclass;


-(NSUInteger)countEvernoteNotesFromBookmarkData:(id)arg0 ;
-(id)archiveItemsFromBookmarkData:(id)arg0 error:(*id)arg1 ;
-(id)dateFromDateString:(id)arg0 ;
-(id)importDirectoryURLWithImportIdentifier:(id)arg0 ;
-(id)init;
-(id)unarchiveEvernoteNoteFromArchiveId:(id)arg0 noteArchiveId:(id)arg1 ;
-(id)unarchiveEvernoteResourceFromArchiveId:(id)arg0 resourceArchiveId:(id)arg1 ;
-(void)archiveEvernoteNote:(id)arg0 ;
-(void)archiveEvernoteResource:(id)arg0 ;
-(void)cleanupArchiveId:(id)arg0 ;
-(void)parseFileAtBookmarkData:(id)arg0 shouldCountOnly:(BOOL)arg1 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;


@end


#endif