// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKRECURRENCERULE_H
#define GKRECURRENCERULE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GKRecurrenceRule : NSObject <NSCopying, NSSecureCoding>



@property NSInteger frequency; // ivar: _frequency
@property NSUInteger interval; // ivar: _interval


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterval:(NSUInteger)arg0 frequency:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif