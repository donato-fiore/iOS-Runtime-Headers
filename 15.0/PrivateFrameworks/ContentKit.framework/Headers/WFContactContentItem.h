// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTACTCONTENTITEM_H
#define WFCONTACTCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"
#import "WFContact.h"

@interface WFContactContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFContact *contact;


+(BOOL)hasLibrary;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)cachedContactGroups;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
+(void)runQuery:(id)arg0 withItems:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(id)changeTransaction;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)generateFileRepresentationForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)objectRepresentationsFromLabeledValues:(id)arg0 ;
-(id)unnamedObjectRepresentationsFromLabeledValues:(id)arg0 ;


@end


#endif