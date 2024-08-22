// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKICSIMPORTER_H
#define EKICSIMPORTER_H

@class NSMapTable, NSMutableSet, NSMutableArray, NSMutableDictionary, NSError, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EKCalendar.h"
#import "EKEventStore.h"

@interface EKICSImporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *async_queue; // ivar: _async_queue
@property (nonatomic) BOOL asynchronous; // ivar: _asynchronous
@property (retain, nonatomic) EKCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSMapTable *calendarToICalFiles; // ivar: _calendarToICalFiles
@property (retain, nonatomic) NSMapTable *calendarToITIPFiles; // ivar: _calendarToITIPFiles
@property (retain, nonatomic) NSMapTable *calendarToVCalFiles; // ivar: _calendarToVCalFiles
@property (copy, nonatomic) id *completionCallback; // ivar: _completionCallback
@property (nonatomic) NSUInteger droppedReminderCount; // ivar: _droppedReminderCount
@property (retain, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (retain, nonatomic) NSMutableSet *existingEventIDs; // ivar: _existingEventIDs
@property (retain, nonatomic) NSMutableArray *filesWithReminders; // ivar: _filesWithReminders
@property (retain, nonatomic) NSMutableDictionary *iCalFilesToImport; // ivar: _iCalFilesToImport
@property (retain, nonatomic) NSMutableDictionary *iTIPFiles; // ivar: _iTIPFiles
@property (copy, nonatomic) id *importDroppedReminders; // ivar: _importDroppedReminders
@property (retain, nonatomic) NSError *importError; // ivar: _importError
@property (readonly, nonatomic) NSArray *importFilePaths; // ivar: _importFilePaths
@property (copy, nonatomic) id *importFoundBackupFile; // ivar: _importFoundBackupFile
@property (copy, nonatomic) id *importSetProgressAsIndeterminate; // ivar: _importSetProgressAsIndeterminate
@property (copy, nonatomic) id *importSetProgressValue; // ivar: _importSetProgressValue
@property (retain, nonatomic) NSMutableArray *importedItems; // ivar: _importedItems
@property (copy, nonatomic) id *makeDecision; // ivar: _makeDecision
@property (retain, nonatomic) NSMutableDictionary *nonITIPFiles; // ivar: _nonITIPFiles
@property (nonatomic) NSUInteger numInvalidEvents; // ivar: _numInvalidEvents
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) id *selectCalendar; // ivar: _selectCalendar
@property (retain, nonatomic) NSMutableArray *vCalFilesToImport; // ivar: _vCalFilesToImport


+(id)allowedImportFileTypes;
-(BOOL)_doITIPFileImport;
-(BOOL)_doImportFiles;
-(BOOL)_isAnyAttendeeAddressFrom:(id)arg0 organizer:(id)arg1 equivalentTo:(id)arg2 ;
-(BOOL)_message:(id)arg0 hasNewSelfOrganizedEventForCalendar:(id)arg1 ;
-(BOOL)_separateICalFilesForITIP;
-(BOOL)_sortFilesByImportCalendar;
-(BOOL)importICalFiles;
-(BOOL)shouldImportContinueGivenDecision:(int)arg0 eventsAffected:(NSUInteger)arg1 ;
-(NSUInteger)_separateFilesForImport:(id)arg0 ;
-(id)_existingEventFromICSEvent:(id)arg0 calendar:(id)arg1 exactMatch:(BOOL)arg2 ;
-(id)_findBestEventFromEvents:(id)arg0 ;
-(id)_findCalendarForExistingEvent:(id)arg0 ;
-(id)_getImportedCalendarItems;
-(id)_initWithFilePaths:(id)arg0 eventStore:(id)arg1 calendar:(id)arg2 options:(NSUInteger)arg3 ;
-(id)_matchingAttendeeAddressesFrom:(id)arg0 organizer:(id)arg1 inSource:(id)arg2 ;
-(id)callbackQueue;
-(id)eventFromDocument:(id)arg0 ;
-(id)infoForNewCalendarForFiles:(id)arg0 forITIPFiles:(id)arg1 nonITIPFiles:(id)arg2 ;
-(id)initWithFilePaths:(id)arg0 calendar:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithFilePaths:(id)arg0 eventStore:(id)arg1 options:(NSUInteger)arg2 ;
-(id)selectCalendarWithTitle:(id)arg0 color:(id)arg1 description:(id)arg2 error:(*id)arg3 ;
-(int)countReminders:(id)arg0 ;
-(void)_createImportHandle;
-(void)_importWithCompletion:(id)arg0 ;
-(void)asyncImportWithCompletion:(id)arg0 ;
-(void)callCompletionWithSuccess:(BOOL)arg0 ;
-(void)callImportDroppedRemindersCallbackIfThereWereReminders;
-(void)importFoundBackupFile:(id)arg0 ;
-(void)setImportProgressAsIndeterminate;
-(void)syncImportWithCompletion:(id)arg0 ;


@end


#endif