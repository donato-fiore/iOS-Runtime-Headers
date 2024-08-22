// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINFERREDMODESESSIONTAGGER_H
#define ATXINFERREDMODESESSIONTAGGER_H


#import <Foundation/Foundation.h>


@interface ATXInferredModeSessionTagger : NSObject



-(id)biomeSessionFromScoredSession:(id)arg0 ;
-(void)inferModesForLastDay;
-(void)inferModesForLastDayWithXPCActivity:(id)arg0 ;


@end


#endif