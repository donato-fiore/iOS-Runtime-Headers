// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNOTECONTENTITEM_H
#define WFNOTECONTENTITEM_H

@class WFContentItem, INNote;



@interface WFNoteContentItem : WFContentItem

@property (readonly, nonatomic) INNote *note;


+(BOOL)hasLibrary;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
+(void)runQuery:(id)arg0 withItems:(id)arg1 completionHandler:(id)arg2 ;
-(id)body;
-(id)creationDate;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)fullText;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)modificationDate;


@end


#endif