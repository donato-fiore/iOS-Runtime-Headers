// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACACTIVITYLISTENTRY_H
#define DACACTIVITYLISTENTRY_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "DACActivityDescriptor.h"

@interface DACActivityListEntry : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) DACActivityDescriptor *activity; // ivar: _activity
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) DACActivityDescriptor *origin; // ivar: _origin
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
+(id)comparator:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEntry:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithActivity:(id)arg0 date:(id)arg1 reason:(NSUInteger)arg2 origin:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entryWithUpdatedReason:(NSUInteger)arg0 ;
-(id)initWithActivity:(id)arg0 reason:(NSUInteger)arg1 origin:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif