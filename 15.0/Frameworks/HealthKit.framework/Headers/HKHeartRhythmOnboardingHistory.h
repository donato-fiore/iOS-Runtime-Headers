// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEARTRHYTHMONBOARDINGHISTORY_H
#define HKHEARTRHYTHMONBOARDINGHISTORY_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface HKHeartRhythmOnboardingHistory : NSObject

@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) NSDictionary *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSInteger maxOnboardedVersion;


-(BOOL)containsOnboardedVersion:(NSInteger)arg0 ;
-(id)_emptyHistory;
-(id)_filterLessThanOrEqualToVersion:(NSInteger)arg0 ;
-(id)_filterOnlyLessThanVersion:(NSInteger)arg0 ;
-(id)description;
-(id)filteredHistoryByVersion:(NSInteger)arg0 filterType:(NSInteger)arg1 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif