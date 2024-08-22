// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSEARCHFORNOTEBOOKITEMSINTENTRESPONSE_H
#define _INPBSEARCHFORNOTEBOOKITEMSINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSearchForNotebookItemsIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBSearchForNotebookItemsIntentResponse : PBCodable <_INPBSearchForNotebookItemsIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSortType;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *notes; // ivar: _notes
@property (readonly, nonatomic) NSUInteger notesCount;
@property (nonatomic) int sortType; // ivar: _sortType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *taskLists; // ivar: _taskLists
@property (readonly, nonatomic) NSUInteger taskListsCount;
@property (copy, nonatomic) NSArray *tasks; // ivar: _tasks
@property (readonly, nonatomic) NSUInteger tasksCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)notesAtIndex:(NSUInteger)arg0 ;
-(id)sortTypeAsString:(int)arg0 ;
-(id)taskListsAtIndex:(NSUInteger)arg0 ;
-(id)tasksAtIndex:(NSUInteger)arg0 ;
-(int)StringAsSortType:(id)arg0 ;
-(void)addNotes:(id)arg0 ;
-(void)addTaskLists:(id)arg0 ;
-(void)addTasks:(id)arg0 ;
-(void)clearNotes;
-(void)clearTaskLists;
-(void)clearTasks;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif