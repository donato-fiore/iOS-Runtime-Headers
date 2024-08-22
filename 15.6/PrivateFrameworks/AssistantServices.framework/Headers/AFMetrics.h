// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMETRICS_H
#define AFMETRICS_H

@class NSNumber, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFMetrics : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger category; // ivar: _category
@property (retain, nonatomic) NSNumber *duration; // ivar: _duration
@property (copy, nonatomic) NSDictionary *eventInfo; // ivar: _eventInfo
@property (copy, nonatomic) NSString *originalCommandId; // ivar: _originalCommandId


+(BOOL)supportsSecureCoding;
-(CGFloat)_roundDouble:(CGFloat)arg0 toSignificantDigits:(NSUInteger)arg1 ;
-(id)aceMetrics;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginalCommandId:(id)arg0 category:(NSInteger)arg1 duration:(id)arg2 ;
-(id)initWithOriginalCommandId:(id)arg0 category:(NSInteger)arg1 eventInfo:(id)arg2 duration:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif