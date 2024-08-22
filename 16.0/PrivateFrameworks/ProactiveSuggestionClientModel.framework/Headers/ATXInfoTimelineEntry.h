// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINFOTIMELINEENTRY_H
#define ATXINFOTIMELINEENTRY_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXInfoTimelineEntryRelevance.h"

@interface ATXInfoTimelineEntry : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL isImportantRelativeToTimeline; // ivar: _isImportantRelativeToTimeline
@property (readonly, nonatomic) ATXInfoTimelineEntryRelevance *relevance; // ivar: _relevance


+(BOOL)supportsSecureCoding;
+(id)entryWithDate:(id)arg0 importantRelativeToTimeline:(BOOL)arg1 ;
+(id)entryWithDate:(id)arg0 relevance:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 importantRelativeToTimeline:(BOOL)arg1 ;
-(id)initWithDate:(id)arg0 relevance:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif