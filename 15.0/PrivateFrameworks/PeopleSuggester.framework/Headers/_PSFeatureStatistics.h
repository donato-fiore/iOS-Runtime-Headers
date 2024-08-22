// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSFEATURESTATISTICS_H
#define _PSFEATURESTATISTICS_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _PSFeatureStatistics : NSObject

@property CGFloat avg; // ivar: _avg
@property (retain, nonatomic) NSMutableArray *list; // ivar: _list
@property CGFloat max; // ivar: _max
@property CGFloat min; // ivar: _min
@property CGFloat mode; // ivar: _mode
@property (retain, nonatomic) NSMutableDictionary *percentiles; // ivar: _percentiles
@property CGFloat stdev; // ivar: _stdev


-(id)initWithList:(id)arg0 ;
-(void)addValue:(id)arg0 ;
-(void)calculateStats;


@end


#endif