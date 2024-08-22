// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCLOUDKITWEBSERVICEQUERYFILTERCOMBINATION_H
#define WFCLOUDKITWEBSERVICEQUERYFILTERCOMBINATION_H

@class NSArray;


#import "WFCloudKitWebServiceQueryFilter.h"

@interface WFCloudKitWebServiceQueryFilterCombination : WFCloudKitWebServiceQueryFilter

@property (retain, nonatomic) NSArray *filters; // ivar: _filters
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)stringRepresentationWithRecordType:(id)arg0 ;


@end


#endif