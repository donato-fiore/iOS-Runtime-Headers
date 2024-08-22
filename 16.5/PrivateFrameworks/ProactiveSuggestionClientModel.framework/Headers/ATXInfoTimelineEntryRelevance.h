// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINFOTIMELINEENTRYRELEVANCE_H
#define ATXINFOTIMELINEENTRYRELEVANCE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXInfoTimelineEntryRelevance : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat score; // ivar: _score


+(BOOL)supportsSecureCoding;
+(id)relevanceWithScore:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScore:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif