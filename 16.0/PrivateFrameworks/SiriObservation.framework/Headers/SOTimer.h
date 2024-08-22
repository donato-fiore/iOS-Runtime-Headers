// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOTIMER_H
#define SOTIMER_H

@class NSDate, NSUUID, NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOTimer : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *dismissedDate; // ivar: _dismissedDate
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (readonly, nonatomic) CGFloat fireTimeInterval; // ivar: _fireTimeInterval
@property (readonly, copy, nonatomic) NSDate *firedDate; // ivar: _firedDate
@property (readonly, nonatomic) BOOL isFiring; // ivar: _isFiring
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, copy, nonatomic) NSUUID *timerID; // ivar: _timerID
@property (readonly, copy, nonatomic) NSURL *timerURL; // ivar: _timerURL
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimerID:(id)arg0 timerURL:(id)arg1 isFiring:(BOOL)arg2 title:(id)arg3 state:(NSInteger)arg4 duration:(CGFloat)arg5 type:(NSInteger)arg6 fireTimeInterval:(CGFloat)arg7 fireDate:(id)arg8 firedDate:(id)arg9 dismissedDate:(id)arg10 lastModifiedDate:(id)arg11 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif