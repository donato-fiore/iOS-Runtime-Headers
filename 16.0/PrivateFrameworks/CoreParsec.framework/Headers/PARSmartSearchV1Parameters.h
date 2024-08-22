// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARSMARTSEARCHV1PARAMETERS_H
#define PARSMARTSEARCHV1PARAMETERS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PARSmartSearchV1Parameters : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat weightAll; // ivar: _weightAll
@property (readonly, nonatomic) CGFloat weightLast1day; // ivar: _weightLast1day
@property (readonly, nonatomic) CGFloat weightLast1hour; // ivar: _weightLast1hour
@property (readonly, nonatomic) CGFloat weightLast1month; // ivar: _weightLast1month
@property (readonly, nonatomic) CGFloat weightLast1week; // ivar: _weightLast1week
@property (readonly, nonatomic) CGFloat weightMinThresholdToSend; // ivar: _weightMinThresholdToSend
@property (readonly, nonatomic) CGFloat weightMostRecent; // ivar: _weightMostRecent


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initFromBag:(id)arg0 ;
-(id)initFromLast1hour:(CGFloat)arg0 last1day:(CGFloat)arg1 last1week:(CGFloat)arg2 last1month:(CGFloat)arg3 all:(CGFloat)arg4 mostRecent:(CGFloat)arg5 minThresholdToSend:(CGFloat)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif