// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXINSERTEDDEBUGCOMPONENT_H
#define SXINSERTEDDEBUGCOMPONENT_H

@class NSString;
@protocol SXDebugComponent, SXInsertableComponent, SXComponentAnchor;

#import <Foundation/Foundation.h>

#import "SXJSONArray.h"
#import "SXJSONDictionary.h"
#import "SXComponentAnimation.h"
#import "SXComponentClassification.h"
#import "SXComponentConditions.h"

@interface SXInsertedDebugComponent : NSObject <SXDebugComponent, SXInsertableComponent>

 {
    NSString *_identifier;
    id<SXComponentAnchor> *_anchor;
    NSString *_layout;
}


@property (readonly, nonatomic) SXJSONArray *additions; // ivar: _additions
@property (readonly, nonatomic) SXJSONDictionary *analytics; // ivar: _analytics
@property (readonly, nonatomic) NSObject<SXComponentAnchor> *anchor;
@property (readonly, nonatomic) SXComponentAnimation *animation; // ivar: _animation
@property (readonly, nonatomic) SXJSONArray *behaviors; // ivar: _behaviors
@property (readonly, nonatomic) SXComponentClassification *classification;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) SXComponentConditions *conditions; // ivar: _conditions
@property (readonly, nonatomic) NSUInteger contentRelevance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *layout;
@property (readonly, nonatomic) BOOL requiresLinkedContent;
@property (readonly, nonatomic) int role;
@property (readonly, nonatomic) NSString *style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger traits;
@property (readonly, nonatomic) NSString *type;




@end


#endif