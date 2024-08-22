// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXUSERFEEDBACKNODEMUTATION_H
#define _SVXUSERFEEDBACKNODEMUTATION_H

@class NSString, NSSet;
@protocol SVXUserFeedbackNodeMutating;

#import <Foundation/Foundation.h>

#import "SVXUserFeedbackNode.h"
#import "SVXUserFeedback.h"

@interface _SVXUserFeedbackNodeMutation : NSObject <SVXUserFeedbackNodeMutating>

 {
    SVXUserFeedbackNode *_baseModel;
    NSString *_identifier;
    CGFloat _duration;
    SVXUserFeedback *_feedback;
    NSSet *_dependentNodes;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setDependentNodes:(id)arg0 ;
-(void)setDuration:(CGFloat)arg0 ;
-(void)setFeedback:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;


@end


#endif