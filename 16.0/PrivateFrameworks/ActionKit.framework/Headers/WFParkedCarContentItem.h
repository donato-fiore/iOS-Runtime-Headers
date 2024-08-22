// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPARKEDCARCONTENTITEM_H
#define WFPARKEDCARCONTENTITEM_H

@class WFContentItem, NSString;
@protocol WFContentItemClass;



@interface WFParkedCarContentItem : WFContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)userSetLocation;
-(NSUInteger)preferredDisplayStyle;
-(id)date;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)location;
-(id)notes;
-(id)photo;
-(id)vehicleEvent;


@end


#endif