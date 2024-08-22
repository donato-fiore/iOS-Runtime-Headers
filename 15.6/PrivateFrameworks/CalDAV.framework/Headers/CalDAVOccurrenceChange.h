// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVOCCURRENCECHANGE_H
#define CALDAVOCCURRENCECHANGE_H

@class NSMutableDictionary, ICSDate;

#import <Foundation/Foundation.h>


@interface CalDAVOccurrenceChange : NSObject

@property (readonly, nonatomic) BOOL attachmentsChanged;
@property (readonly, nonatomic) BOOL attendeesChanged;
@property (retain, nonatomic) NSMutableDictionary *changes; // ivar: _changes
@property (readonly, nonatomic) BOOL dateTimeChanged;
@property (readonly, nonatomic) BOOL descriptionChanged;
@property (readonly, nonatomic) BOOL endTimeChanged;
@property (nonatomic) BOOL isMaster; // ivar: _isMaster
@property (readonly, nonatomic) BOOL locationChanged;
@property (readonly, nonatomic) BOOL participationChanged;
@property (readonly, nonatomic) BOOL privateCommentChanged;
@property (readonly, nonatomic) BOOL proposedStartDateChanged;
@property (readonly, nonatomic) BOOL recurrenceChanged;
@property (retain, nonatomic) ICSDate *recurrenceID; // ivar: _recurrenceID
@property (readonly, nonatomic) BOOL startTimeChanged;
@property (readonly, nonatomic) BOOL statusChanged;
@property (readonly, nonatomic) BOOL summaryChanged;
@property (readonly, nonatomic) BOOL timeZoneChanged;
@property (readonly, nonatomic) BOOL urlChanged;


+(id)changeWithItem:(id)arg0 ;
+(id)changeWithOccurrenceID:(id)arg0 ;
-(BOOL)didParameterChange:(id)arg0 onProperty:(id)arg1 ;
-(BOOL)didPropertyChange:(id)arg0 ;
-(id)init;
-(id)initWithOccurrenceID:(id)arg0 ;
-(void)addChangedParameter:(id)arg0 ofProperty:(id)arg1 ;
-(void)addChangedProperty:(id)arg0 ;


@end


#endif