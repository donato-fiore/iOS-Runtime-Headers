// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXINSERTEDADCOMPONENT_H
#define SXINSERTEDADCOMPONENT_H

@class UIColor, NSString;
@protocol SXInsertableComponent, SXAdComponent, SXComponentAnchor;

#import <Foundation/Foundation.h>

#import "SXJSONArray.h"
#import "SXJSONDictionary.h"
#import "SXComponentAnimation.h"
#import "SXComponentClassification.h"
#import "SXComponentConditions.h"

@interface SXInsertedAdComponent : NSObject <SXInsertableComponent, SXAdComponent>



@property (readonly, nonatomic) NSUInteger adType; // ivar: _adType
@property (readonly, nonatomic) SXJSONArray *additions; // ivar: _additions
@property (readonly, nonatomic) SXJSONDictionary *advertising; // ivar: _advertising
@property (readonly, nonatomic) SXJSONDictionary *analytics; // ivar: _analytics
@property (retain, nonatomic) NSObject<SXComponentAnchor> *anchor; // ivar: _anchor
@property (readonly, nonatomic) SXComponentAnimation *animation; // ivar: _animation
@property (readonly, nonatomic) SXJSONArray *behaviors; // ivar: _behaviors
@property (readonly, nonatomic) SXComponentClassification *classification;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) SXComponentConditions *conditions; // ivar: _conditions
@property (readonly, nonatomic) NSUInteger contentRelevance;
@property (readonly, nonatomic) UIColor *debugColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *layout; // ivar: _layout
@property (readonly, nonatomic) NSString *placementIdentifier; // ivar: _placementIdentifier
@property (readonly, nonatomic) NSUInteger placementType;
@property (readonly, nonatomic) int role;
@property (readonly, nonatomic) NSString *style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger traits;
@property (readonly, nonatomic) NSString *type;


-(id)initWithAdType:(NSUInteger)arg0 ;


@end


#endif