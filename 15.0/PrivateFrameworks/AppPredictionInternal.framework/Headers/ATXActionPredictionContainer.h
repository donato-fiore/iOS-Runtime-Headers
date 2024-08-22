// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXACTIONPREDICTIONCONTAINER_H
#define ATXACTIONPREDICTIONCONTAINER_H

@class _PASLock, NSString;
@protocol ATXScoredPredictionProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXMinimalSlotResolutionParameters.h"

@interface ATXActionPredictionContainer : NSObject <ATXScoredPredictionProtocol, NSCopying>

 {
    _PASLock *_lock;
    ATXPredictionItem _predictionItem;
    ATXMinimalSlotResolutionParameters *_parameters;
}


@property (readonly, nonatomic) NSString *actionKey; // ivar: _actionKey
@property (nonatomic) ATXPredictionItem predictionItem;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActionPredictionContainer:(id)arg0 ;
-(NSUInteger)hash;
-(float)score;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMinimalSlotResolutionParameters:(id)arg0 score:(float)arg1 actionKey:(id)arg2 ;
-(id)initWithScoredAction:(id)arg0 slotSet:(id)arg1 actionKey:(id)arg2 ;
-(id)initWithScoredAction:(id)arg0 slotSet:(id)arg1 minimalSlotResolutionParameters:(id)arg2 score:(float)arg3 actionKey:(id)arg4 predictionItem:(struct ATXPredictionItem )arg5 ;
-(id)scoredAction;
-(id)slotSet;
-(void)initializeScoredActionAndSlotSet;
-(void)setScore:(float)arg0 ;


@end


#endif