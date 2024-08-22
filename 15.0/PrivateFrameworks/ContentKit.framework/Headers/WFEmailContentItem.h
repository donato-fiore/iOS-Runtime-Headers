// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFEMAILCONTENTITEM_H
#define WFEMAILCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFEmail.h"

@interface WFEmailContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFEmail *email;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif