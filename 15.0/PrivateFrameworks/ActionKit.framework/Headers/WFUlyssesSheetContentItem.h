// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFULYSSESSHEETCONTENTITEM_H
#define WFULYSSESSHEETCONTENTITEM_H

@class WFContentItem;



@interface WFUlyssesSheetContentItem : WFContentItem



+(BOOL)canLowercaseTypeDescription;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)sheet;


@end


#endif