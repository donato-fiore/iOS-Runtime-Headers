// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INRESOLUTIONRESULTTRANSFORMATIONOPERATION_H
#define INRESOLUTIONRESULTTRANSFORMATIONOPERATION_H

@class NSOperation;
@protocol INIntentParameterOptionsProviding, INIntentResolutionResultDataProviding;


#import "INIntent.h"
#import "INIntentSlotDescription.h"

@interface INResolutionResultTransformationOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
}


@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) INIntentSlotDescription *intentSlotDescription; // ivar: _intentSlotDescription
@property (readonly, nonatomic) NSObject<INIntentParameterOptionsProviding> *optionsProvider; // ivar: _optionsProvider
@property (readonly, nonatomic) NSObject<INIntentResolutionResultDataProviding> *result; // ivar: _result
@property (copy, nonatomic) id *returnBlock; // ivar: _returnBlock


-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)initWithResult:(id)arg0 intent:(id)arg1 intentSlotDescription:(id)arg2 optionsProvider:(id)arg3 ;
-(void)start;


@end


#endif