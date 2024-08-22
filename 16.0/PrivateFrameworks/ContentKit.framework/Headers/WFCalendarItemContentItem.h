// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCALENDARITEMCONTENTITEM_H
#define WFCALENDARITEMCONTENTITEM_H

@class EKCalendarItem, NSString, EKEventStore;
@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"

@interface WFCalendarItemContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) EKCalendarItem *calendarItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *location;
@property (readonly) Class superclass;


+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(id)attachments;
-(id)changeTransaction;
-(id)generateFileRepresentationForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)copyStateToItem:(id)arg0 ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif