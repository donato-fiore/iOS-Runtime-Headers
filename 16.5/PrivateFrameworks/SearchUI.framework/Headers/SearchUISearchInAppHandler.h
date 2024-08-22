// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISEARCHINAPPHANDLER_H
#define SEARCHUISEARCHINAPPHANDLER_H



#import "SearchUIOpenUserActivityHandler.h"

@interface SearchUISearchInAppHandler : SearchUIOpenUserActivityHandler



-(void)getUserActivityForCommand:(id)arg0 environment:(id)arg1 completionHandler:(id)arg2 ;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;


@end


#endif