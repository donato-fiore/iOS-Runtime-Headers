// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICACTIVITYSTREAMDIGEST_H
#define ICACTIVITYSTREAMDIGEST_H

@class NSDate, NSValue;
@protocol ICActivityEventResolving;

#import <Foundation/Foundation.h>

#import "TTTextEditFilter.h"

@interface ICActivityStreamDigest : NSObject

@property (readonly, nonatomic) BOOL hasRecentUpdates;
@property (readonly, nonatomic) BOOL hasUnseenHighlights;
@property (readonly, nonatomic) BOOL hasUnseenSummary;
@property (readonly, nonatomic) BOOL isCurrentUserMentionedInRecentSummary;
@property (copy, nonatomic) NSDate *lastActivitySummaryViewedDate; // ivar: _lastActivitySummaryViewedDate
@property (nonatomic, readonly) BOOL objc_hasRecentUpdates;
@property (nonatomic, readonly) BOOL objc_hasUnseenHighlights;
@property (nonatomic, readonly) BOOL objc_hasUnseenSummary;
@property (nonatomic, readonly) BOOL objc_isCurrentUserMentionedInRecentSummary;
@property (nonatomic, readonly) TTTextEditFilter *objc_recentUpdatesFilter;
@property (nonatomic, readonly) NSValue *objc_recentUpdatesRangeValue;
@property (retain, nonatomic) id *recentActivityEventsStorage; // ivar: _recentActivityEventsStorage
@property (readonly, nonatomic) TTTextEditFilter *recentUpdatesFilter;
@property (copy, nonatomic) NSDate *recentUpdatesGenerationDate; // ivar: _recentUpdatesGenerationDate
@property (readonly, nonatomic) NSValue *recentUpdatesRangeValue;
@property (readonly, nonatomic) NSObject<ICActivityEventResolving> *resolverStorage; // ivar: _resolverStorage


-(BOOL)isCurrentUserMentionedInFilter:(id)arg0 ;
-(BOOL)objc_isCurrentUserMentionedInFilter:(id)arg0 ;
-(id)initWithResolver:(id)arg0 ;


@end


#endif