// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCLOUDKITWEBSERVICEQUERYFILTER_H
#define WFCLOUDKITWEBSERVICEQUERYFILTER_H


#import <Foundation/Foundation.h>


@interface WFCloudKitWebServiceQueryFilter : NSObject



+(id)filterWithCombinationOf:(id)arg0 by:(NSUInteger)arg1 ;
+(id)filterWithComparisonOf:(id)arg0 toInt:(NSInteger)arg1 by:(NSUInteger)arg2 ;
+(id)filterWithComparisonOf:(id)arg0 toString:(id)arg1 by:(NSUInteger)arg2 ;
+(id)filterWithComparisonOf:(id)arg0 toStringArray:(id)arg1 by:(NSUInteger)arg2 ;
-(id)stringRepresentationWithRecordType:(id)arg0 ;


@end


#endif