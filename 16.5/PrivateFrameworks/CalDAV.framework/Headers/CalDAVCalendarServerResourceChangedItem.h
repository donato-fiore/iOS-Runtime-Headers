// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSERVERRESOURCECHANGEDITEM_H
#define CALDAVCALENDARSERVERRESOURCECHANGEDITEM_H

@class CoreDAVItem, NSMutableSet, ICSDateValue;



@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *collectionChanges; // ivar: _collectionChanges
@property (retain, nonatomic) NSMutableSet *collectionUpdates; // ivar: _collectionUpdates
@property (retain, nonatomic) NSMutableSet *created; // ivar: _created
@property (retain, nonatomic) NSMutableSet *deleted; // ivar: _deleted
@property (retain, nonatomic) ICSDateValue *dtstamp; // ivar: _dtstamp
@property (retain, nonatomic) NSMutableSet *updated; // ivar: _updated


-(id)copyParseRules;
-(id)init;
-(void)addCollectionChanges:(id)arg0 ;
-(void)addCollectionUpdates:(id)arg0 ;
-(void)addCreated:(id)arg0 ;
-(void)addDeleted:(id)arg0 ;
-(void)addUpdated:(id)arg0 ;


@end


#endif