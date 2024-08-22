// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMOMENTCLUSTER_H
#define PLMOMENTCLUSTER_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface PLMomentCluster : NSObject

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (readonly, nonatomic) NSDate *localStartDate; // ivar: _localStartDate
@property (readonly, copy, nonatomic) NSArray *moments; // ivar: _moments
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithMoments:(id)arg0 ;


@end


#endif