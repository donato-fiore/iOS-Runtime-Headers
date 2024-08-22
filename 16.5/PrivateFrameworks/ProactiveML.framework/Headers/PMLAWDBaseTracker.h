// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLAWDBASETRACKER_H
#define PMLAWDBASETRACKER_H


#import <Foundation/Foundation.h>

#import "AWDProactiveModelFittingModelInfo.h"

@interface PMLAWDBaseTracker : NSObject

@property (readonly, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // ivar: _modelInfo


+(id)trackerForModelName:(id)arg0 modelVersion:(id)arg1 modelLocale:(id)arg2 ;
+(id)trackerForPlanId:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(void)postMetricId:(unsigned int)arg0 message:(id)arg1 ;


@end


#endif