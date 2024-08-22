// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETDATASOURCEWITHEXTRACTOR_H
#define ETDATASOURCEWITHEXTRACTOR_H

@protocol ETDataSource;

#import <Foundation/Foundation.h>

#import "ETImageDescriptorExtractor.h"

@interface ETDataSourceWithExtractor : NSObject <ETDataSource>

 {
    id<ETDataSource> *_source;
    ETImageDescriptorExtractor *_extractor;
}




-(id)dataPointAtIndex:(int)arg0 ;
-(id)initWithDataSource:(id)arg0 extractor:(id)arg1 ;
-(int)numberOfDataPoints;


@end


#endif