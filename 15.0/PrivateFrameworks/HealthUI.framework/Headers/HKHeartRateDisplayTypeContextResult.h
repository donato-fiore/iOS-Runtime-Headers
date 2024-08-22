// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEARTRATEDISPLAYTYPECONTEXTRESULT_H
#define HKHEARTRATEDISPLAYTYPECONTEXTRESULT_H

@class HKStatistics;

#import <Foundation/Foundation.h>


@interface HKHeartRateDisplayTypeContextResult : NSObject

@property (nonatomic) NSInteger context; // ivar: _context
@property (retain, nonatomic) HKStatistics *statistics; // ivar: _statistics


-(id)debugDescription;
-(id)initWithContext:(NSInteger)arg0 statistics:(id)arg1 ;


@end


#endif