// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFARTICLECONTENTITEM_H
#define WFARTICLECONTENTITEM_H

@class NSString;
@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFArticle.h"

@interface WFArticleContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFArticle *article;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportedTypesMustBeDeterminedByInstance;
+(id)attributedStringWithHTML:(id)arg0 named:(id)arg1 ;
+(id)contentCategories;
+(id)countDescription;
+(id)fileWithHTML:(id)arg0 named:(id)arg1 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)generateFileRepresentationForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif