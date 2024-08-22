// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONRESOLUTION_H
#define ATXACTIONRESOLUTION_H

@protocol ATXPredictionContextBuilderProtocol;

#import <Foundation/Foundation.h>

#import "ATXSlotResolution.h"

@interface ATXActionResolution : NSObject {
    ATXSlotResolution *_slotResolver;
    id<ATXPredictionContextBuilderProtocol> *_predictionContextBuilder;
}




-(id)actionPredictionsForActionKey:(id)arg0 statistics:(id)arg1 appActionPredictionItem:(struct ATXPredictionItem *)arg2 appActionLogProbability:(CGFloat)arg3 scoreLogger:(id)arg4 andLimit:(int)arg5 forMagicalMoments:(BOOL)arg6 currentDate:(id)arg7 ;
-(id)actionPredictionsForActionKey:(id)arg0 statistics:(id)arg1 appActionPredictionItem:(struct ATXPredictionItem *)arg2 appActionLogProbability:(CGFloat)arg3 scoreLogger:(id)arg4 andLimit:(int)arg5 forMagicalMoments:(BOOL)arg6 predictionItemsToKeep:(*void)arg7 currentDate:(id)arg8 ;
-(id)init;
-(id)initWithSlotResolver:(id)arg0 predictionContextBuilder:(id)arg1 ;
-(id)statisticsForActionKey:(id)arg0 ;
-(id)statisticsForActionKey:(id)arg0 context:(id)arg1 ;


@end


#endif