// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLINTERRUPTEVENT_H
#define SCLINTERRUPTEVENT_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCLContact.h"

@interface SCLInterruptEvent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) SCLContact *sender; // ivar: _sender
@property (readonly, nonatomic) BOOL shouldAlwaysInterrupt;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSUInteger urgency; // ivar: _urgency


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithEvent:(id)arg0 ;
-(id)_initWithType:(NSUInteger)arg0 urgency:(NSUInteger)arg1 sender:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif