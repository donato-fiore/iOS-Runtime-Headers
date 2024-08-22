// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GDSEMISSIONHISTORY_H
#define _GDSEMISSIONHISTORY_H

@class NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface _GDSEmissionHistory : NSObject

@property (readonly, nonatomic) NSDate *fetchDate; // ivar: _fetchDate
@property (readonly, nonatomic) NSDictionary *historicalMap; // ivar: _historicalMap


-(id)initWithHistoricalData:(id)arg0 fetchedAt:(id)arg1 ;


@end


#endif