// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVDATERANGEMETADATAGROUPINTERNAL_H
#define AVDATERANGEMETADATAGROUPINTERNAL_H

@class NSDate, NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVDateRangeMetadataGroupInternal : NSObject {
    NSDate *startDate;
    NSDate *endDate;
    NSArray *metadataItems;
    NSString *classifyingLabel;
    NSString *uniqueID;
    NSDate *discoveryTimestamp;
    NSDate *modificationTimestamp;
    NSDictionary *extraFigProperties;
}






@end


#endif