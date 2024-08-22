// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEROAPPMANAGER_H
#define ATXHEROAPPMANAGER_H


#import <Foundation/Foundation.h>

#import "ATXHeroAppFeedback.h"

@interface ATXHeroAppManager : NSObject

@property (readonly, nonatomic) ATXHeroAppFeedback *heroFeedback; // ivar: _heroFeedback


-(id)init;
-(id)initWithFeedback:(id)arg0 ;
-(void)donateHeroAppPredictions:(id)arg0 ;


@end


#endif