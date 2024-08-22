// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXUSERFEEDBACKSCENEMUTATION_H
#define _SVXUSERFEEDBACKSCENEMUTATION_H

@class NSString, NSSet;
@protocol SVXUserFeedbackSceneMutating;

#import <Foundation/Foundation.h>

#import "SVXUserFeedbackScene.h"

@interface _SVXUserFeedbackSceneMutation : NSObject <SVXUserFeedbackSceneMutating>

 {
    SVXUserFeedbackScene *_baseModel;
    NSString *_identifier;
    CGFloat _duration;
    NSSet *_nodes;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setDuration:(CGFloat)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setNodes:(id)arg0 ;


@end


#endif