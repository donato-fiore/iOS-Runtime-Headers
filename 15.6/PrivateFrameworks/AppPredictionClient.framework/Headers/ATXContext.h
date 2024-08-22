// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCONTEXT_H
#define ATXCONTEXT_H

@class CLLocation, NSDateInterval;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger contextType; // ivar: _contextType
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSDateInterval *timeWindow; // ivar: _timeWindow


+(BOOL)supportsSecureCoding;
+(id)defaultTimeWindowForContextType:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextType:(NSUInteger)arg0 location:(id)arg1 timeWindow:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif