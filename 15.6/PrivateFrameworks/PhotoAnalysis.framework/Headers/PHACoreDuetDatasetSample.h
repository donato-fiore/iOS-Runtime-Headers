// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHACOREDUETDATASETSAMPLE_H
#define PHACOREDUETDATASETSAMPLE_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface PHACoreDuetDatasetSample : NSObject

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *subset; // ivar: _subset


-(id)initWithIdentifier:(id)arg0 andDate:(id)arg1 forSubset:(id)arg2 ;


@end


#endif