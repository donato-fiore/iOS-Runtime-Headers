// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMEVENTEXTRACTOR_H
#define BMEVENTEXTRACTOR_H


#import <Foundation/Foundation.h>

#import "BMMiningTaskConfig.h"

@interface BMEventExtractor : NSObject

@property (retain) BMMiningTaskConfig *bmMiningTaskConfig; // ivar: _bmMiningTaskConfig
@property BOOL shouldStop; // ivar: _shouldStop


-(id)extractEventsFilteredByTypes:(id)arg0 taskSpecificEventProviders:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithBMMiningTaskConfig:(id)arg0 ;
-(void)terminateEarly;


@end


#endif