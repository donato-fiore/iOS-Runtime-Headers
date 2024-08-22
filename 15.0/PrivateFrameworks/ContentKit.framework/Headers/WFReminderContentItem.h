// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMINDERCONTENTITEM_H
#define WFREMINDERCONTENTITEM_H

@class REMReminder, REMStore;
@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"

@interface WFReminderContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) REMReminder *reminder;
@property (retain, nonatomic) REMStore *reminderStore; // ivar: _reminderStore


+(BOOL)hasLibrary;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)allLists;
+(id)contactRepresentationWithContact:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)defaultList;
+(id)itemWithReminder:(id)arg0 fromReminderStore:(id)arg1 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
+(void)runQuery:(id)arg0 withItems:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)flagged;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)hasAlarms;
-(BOOL)hasSubtasks;
-(id)URL;
-(id)changeTransaction;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)generateFileRepresentationForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)imageAttachments;
-(id)parentReminder;
-(id)subtasks;
-(void)copyStateToItem:(id)arg0 ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif