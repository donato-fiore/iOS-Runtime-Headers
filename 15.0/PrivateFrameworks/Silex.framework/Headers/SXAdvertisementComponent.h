// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXADVERTISEMENTCOMPONENT_H
#define SXADVERTISEMENTCOMPONENT_H

@class UIColor, NSString;
@protocol SXAdComponent, SXComponentAnchor;


#import "SXComponent.h"
#import "SXJSONArray.h"
#import "SXJSONDictionary.h"
#import "SXComponentAnimation.h"
#import "SXComponentClassification.h"
#import "SXComponentConditions.h"

@interface SXAdvertisementComponent : SXComponent <SXAdComponent>



@property (readonly, nonatomic) NSUInteger adType; // ivar: adType
@property (readonly, nonatomic) SXJSONArray *additions;
@property (readonly, nonatomic) SXJSONDictionary *advertising;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly, nonatomic) NSObject<SXComponentAnchor> *anchor;
@property (readonly, nonatomic) SXComponentAnimation *animation;
@property (readonly, nonatomic) SXJSONArray *behaviors;
@property (readonly, nonatomic) SXComponentClassification *classification;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) SXComponentConditions *conditions;
@property (readonly, nonatomic) NSUInteger contentRelevance;
@property (readonly, nonatomic) UIColor *debugColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *layout;
@property (readonly, nonatomic) NSString *placementIdentifier;
@property (readonly, nonatomic) NSUInteger placementType;
@property (readonly, nonatomic) int role;
@property (readonly, nonatomic) NSString *style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger traits;
@property (readonly, nonatomic) NSString *type;


-(id)initWithJSONObject:(id)arg0 andVersion:(id)arg1 ;


@end


#endif