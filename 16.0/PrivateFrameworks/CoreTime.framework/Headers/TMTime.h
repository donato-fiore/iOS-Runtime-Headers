// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMTIME_H
#define TMTIME_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TMTime : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL reliability; // ivar: _reliability
@property (nonatomic) NSInteger rtc_ns; // ivar: _rtc_ns
@property (nonatomic) CGFloat rtc_s;
@property (nonatomic) CGFloat sf; // ivar: _sf
@property (nonatomic) CGFloat sfUnc; // ivar: _sfUnc
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (nonatomic, getter=isSynthesized) BOOL synthesized; // ivar: _synthesized
@property (nonatomic) CGFloat utcUnc_s; // ivar: _utcUnc_s
@property (nonatomic) NSInteger utc_ns; // ivar: _utc_ns
@property (nonatomic) CGFloat utc_s;


+(BOOL)supportsSecureCoding;
+(id)timeWithDictionary:(id)arg0 ;
+(id)timeWithUtc_s:(CGFloat)arg0 utcUnc_s:(CGFloat)arg1 rtc_s:(CGFloat)arg2 sf:(CGFloat)arg3 source:(id)arg4 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(CGFloat)propagatedTimeAtRTC:(CGFloat)arg0 ;
-(CGFloat)propagatedUncertaintyAtRTC:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionary;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUtc_ns:(NSInteger)arg0 utcUnc_s:(CGFloat)arg1 rtc_ns:(NSInteger)arg2 sf:(CGFloat)arg3 sfUnc:(CGFloat)arg4 source:(id)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif