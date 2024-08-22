// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDANALYTICSPAYLOADINFO_H
#define NDANALYTICSPAYLOADINFO_H

@class NSDictionary, NSURL, NSArray;
@protocol NDAnalyticsPayloadInfo;

#import <Foundation/Foundation.h>


@interface NDAnalyticsPayloadInfo : NSObject <NDAnalyticsPayloadInfo>



@property (copy, nonatomic) NSDictionary *droppedEntriesByReason; // ivar: _droppedEntriesByReason
@property (copy, nonatomic) NSURL *endpointURL; // ivar: _endpointURL
@property (copy, nonatomic) NSArray *entriesToUpload; // ivar: _entriesToUpload
@property (copy, nonatomic) NSDictionary *valuesByHTTPHeaderField; // ivar: _valuesByHTTPHeaderField


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif