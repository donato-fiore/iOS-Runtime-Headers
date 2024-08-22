// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTODO_H
#define ASTODO_H

@class NSString, NSNumber, NSArray, NSDate, NSTimeZone;
@protocol DADataElement;


#import "ASChangedCollectionLeaf.h"
#import "ASToDoRecurrence.h"

@interface ASToDo : ASChangedCollectionLeaf <DADataElement>



@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) NSNumber *bodyTruncated; // ivar: _bodyTruncated
@property (nonatomic) *void calTask; // ivar: _calTask
@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (retain, nonatomic) NSNumber *complete; // ivar: _complete
@property (retain, nonatomic) NSDate *dateCompleted; // ivar: _dateCompleted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *dueDate; // ivar: _dueDate
@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *importance; // ivar: _importance
@property (retain, nonatomic) ASToDoRecurrence *recurrence; // ivar: _recurrence
@property (retain, nonatomic) NSDate *reminderDateTime; // ivar: _reminderDateTime
@property (retain, nonatomic) NSNumber *reminderIsSet; // ivar: _reminderIsSet
@property (retain, nonatomic) NSNumber *sensitivity; // ivar: _sensitivity
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=setUTCDueDate:) NSDate *utcDueDate; // ivar: _utcDueDate
@property (retain, nonatomic, setter=setUTCStartTime:) NSDate *utcStartTime; // ivar: _utcStartTime


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
+(id)toDoWithCalTask:(*void)arg0 serverID:(id)arg1 account:(id)arg2 ;
-(BOOL)deleteFromCalendar;
-(BOOL)deleteFromContainer:(*void)arg0 ;
-(BOOL)loadCalRecordForAccount:(id)arg0 ;
-(BOOL)loadLocalItemWithAccount:(id)arg0 ;
-(BOOL)saveServerIDToCalendar;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)saveToCalendarWithExistingRecord:(*void)arg0 intoCalendar:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(BOOL)saveWithLocalObject:(*void)arg0 toContainer:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(NSInteger)dataclass;
-(id)bestGuessTimeZoneWithLocalDate:(id)arg0 utcDate:(id)arg1 ;
-(id)initWithCalTask:(*void)arg0 serverID:(id)arg1 account:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_loadAttributesFromCalTask:(*void)arg0 forAccount:(id)arg1 ;
-(void)appendActiveSyncDataForTask:(id)arg0 toWBXMLData:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadClientIDs;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)postProcessApplicationData;
-(void)setLocalItem:(*void)arg0 ;


@end


#endif