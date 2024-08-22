// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTHINT_H
#define RTHINT_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "RTLocation.h"

@interface RTHint : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) RTLocation *location; // ivar: _location
@property (readonly, nonatomic) NSInteger source; // ivar: _source


+(BOOL)supportsSecureCoding;
+(id)hintSourceToString:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 source:(NSInteger)arg1 date:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif