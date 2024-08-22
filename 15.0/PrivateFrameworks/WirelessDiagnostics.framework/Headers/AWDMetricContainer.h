// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDMETRICCONTAINER_H
#define AWDMETRICCONTAINER_H

@class PBCodable;

#import <Foundation/Foundation.h>


@interface AWDMetricContainer : NSObject

@property (retain, nonatomic) PBCodable *metric; // ivar: _metric
@property (readonly, nonatomic) unsigned int metricId; // ivar: _metricId


-(id)initWithMetricId:(unsigned int)arg0 ;


@end


#endif