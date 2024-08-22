// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHISTOGRAMBUNDLEIDTABLE_H
#define ATXHISTOGRAMBUNDLEIDTABLE_H

@protocol ATXBundleIdRemovableProtocol;


#import "ATXHistogramTable.h"

@interface ATXHistogramBundleIdTable : ATXHistogramTable <ATXBundleIdRemovableProtocol>





+(id)sharedInstance;
+(void)stopUsingTemporarySharedInstance;
+(void)useTemporarySharedInstance:(id)arg0 ;
-(id)initWithDatastore:(id)arg0 ;
-(id)permutationFrom:(id)arg0 ;
-(void)removeBundleIds:(id)arg0 ;


@end


#endif