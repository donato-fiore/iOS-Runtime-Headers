// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASMETRIC_H
#define PLASMETRIC_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PLASMetric : NSObject

@property (retain) NSString *metricKey; // ivar: _metricKey
@property (retain) NSArray *metricProperties; // ivar: _metricProperties
@property short metricType; // ivar: _metricType
@property (copy) id *query; // ivar: _query
@property (copy) id *summarizer; // ivar: _summarizer


-(id)initMetric:(id)arg0 withType:(short)arg1 withProperties:(id)arg2 withQuery:(id)arg3 andSummarizerBlock:(id)arg4 ;


@end


#endif