// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANALYTICSKNOWLEDGESTOREDATASETSAMPLE_H
#define CPANALYTICSKNOWLEDGESTOREDATASETSAMPLE_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface CPAnalyticsKnowledgeStoreDatasetSample : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *subset; // ivar: _subset


-(id)initWithIdentifier:(id)arg0 andDate:(id)arg1 forSubset:(id)arg2 ;
-(id)metadata;


@end


#endif