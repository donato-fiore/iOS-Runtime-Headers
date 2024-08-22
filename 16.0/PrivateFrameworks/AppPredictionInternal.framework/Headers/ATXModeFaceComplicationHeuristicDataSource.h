// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEFACECOMPLICATIONHEURISTICDATASOURCE_H
#define ATXMODEFACECOMPLICATIONHEURISTICDATASOURCE_H

@class NSSet, NSString;
@protocol ATXModeFaceComplicationDataSource;

#import <Foundation/Foundation.h>

#import "ATXSuggestedPagesTunableConstants.h"

@interface ATXModeFaceComplicationHeuristicDataSource : NSObject <ATXModeFaceComplicationDataSource>

 {
    NSSet *_allComplicationDescriptors;
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasSignificantHomeAccessoryEvents;
-(BOOL)_hasSignificantRemindersEvents;
-(BOOL)_hasSignificantStocksEvents;
-(id)_complicationsForDrivingMode;
-(id)_complicationsForExerciseMode;
-(id)_complicationsForGamingMode;
-(id)_complicationsForMindfulnessMode;
-(id)_complicationsForPersonalMode;
-(id)_complicationsForReadingMode;
-(id)_complicationsForSleepMode;
-(id)_complicationsForWorkMode;
-(id)init;
-(id)provideComplicationsForSuggestedFaceType:(NSInteger)arg0 environment:(id)arg1 ;
-(void)_addComplicationWithFamily:(NSInteger)arg0 extension:(id)arg1 kind:(id)arg2 container:(id)arg3 score:(CGFloat)arg4 to:(id)arg5 ;


@end


#endif