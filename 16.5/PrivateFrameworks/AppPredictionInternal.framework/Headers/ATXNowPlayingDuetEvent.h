// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOWPLAYINGDUETEVENT_H
#define ATXNOWPLAYINGDUETEVENT_H

@class NSString;
@protocol NSSecureCoding;


#import "ATXDuetEvent.h"

@interface ATXNowPlayingDuetEvent : ATXDuetEvent <NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSInteger nowPlayingState; // ivar: _nowPlayingState
@property (readonly, nonatomic) NSString *track; // ivar: _track


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)description;
-(id)identifier;
-(id)initWithBundleId:(id)arg0 track:(id)arg1 nowPlayingState:(NSInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif