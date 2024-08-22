// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTCATCHUPOPERATIONTAGREQUEST_H
#define NTCATCHUPOPERATIONTAGREQUEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTCatchUpOperationTagRequest : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger cutoffTime; // ivar: _cutoffTime
@property (readonly, nonatomic) NSInteger fetchingBin; // ivar: _fetchingBin
@property (readonly, nonatomic) NSUInteger headlinesPerFeedFetchCount; // ivar: _headlinesPerFeedFetchCount
@property (readonly, copy, nonatomic) NSString *tagID; // ivar: _tagID


-(id)init;
-(id)initWithTagTodaySectionSpecificConfig:(id)arg0 tagID:(id)arg1 ;


@end


#endif