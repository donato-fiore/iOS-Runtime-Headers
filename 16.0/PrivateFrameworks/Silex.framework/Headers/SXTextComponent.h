// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXTEXTCOMPONENT_H
#define SXTEXTCOMPONENT_H

@class NSString;
@protocol SXTextComponent, SXComponentAnchor;


#import "SXComponent.h"
#import "SXJSONArray.h"
#import "SXJSONDictionary.h"
#import "SXComponentAnimation.h"
#import "SXComponentClassification.h"
#import "SXComponentConditions.h"

@interface SXTextComponent : SXComponent <SXTextComponent>



@property (readonly, nonatomic) SXJSONArray *additions;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly, nonatomic) NSObject<SXComponentAnchor> *anchor;
@property (readonly, nonatomic) SXComponentAnimation *animation;
@property (readonly, nonatomic) SXJSONArray *behaviors;
@property (readonly, nonatomic) SXComponentClassification *classification;
@property (readonly, nonatomic) SXComponentConditions *conditions;
@property (readonly, nonatomic) NSUInteger contentRelevance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SXJSONArray *inlineTextStyles;
@property (readonly, nonatomic) NSString *layout;
@property (readonly, nonatomic) BOOL requiresLinkedContent;
@property (readonly, nonatomic) int role;
@property (readonly, nonatomic) NSString *style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) NSUInteger traits;
@property (readonly, nonatomic) NSString *type;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;


@end


#endif