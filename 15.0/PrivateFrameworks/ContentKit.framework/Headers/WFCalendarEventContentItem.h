// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCALENDAREVENTCONTENTITEM_H
#define WFCALENDAREVENTCONTENTITEM_H

@class EKEvent;


#import "WFCalendarItemContentItem.h"

@interface WFCalendarEventContentItem : WFCalendarItemContentItem

@property (readonly, nonatomic) EKEvent *event;


+(BOOL)hasLibrary;
+(id)countDescription;
+(id)datebyApplyingComponents:(id)arg0 toDateComponents:(id)arg1 ;
+(id)filterDescription;
+(id)itemWithEKEvent:(id)arg0 fromEventStore:(id)arg1 ;
+(id)ownedTypes;
+(id)pluralFilterDescription;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
+(void)runQuery:(id)arg0 withItems:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
-(id)changeTransaction;
-(id)defaultSourceForRepresentation:(id)arg0 ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif