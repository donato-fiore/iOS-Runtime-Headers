// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCSYMPTOMHISTORYBUILDER_H
#define HDMCSYMPTOMHISTORYBUILDER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HDMCSymptomHistoryBuilder : NSObject {
    NSMutableDictionary *_mostRecentDayBySymptom;
}


@property (nonatomic) NSUInteger recentSymptoms; // ivar: _recentSymptoms


-(id)initWithCurrentDayIndex:(NSInteger)arg0 ;
-(void)addSymptoms:(NSUInteger)arg0 forDayIndex:(NSInteger)arg1 ;


@end


#endif