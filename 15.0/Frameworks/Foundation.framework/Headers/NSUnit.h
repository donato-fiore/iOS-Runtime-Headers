// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSUNIT_H
#define NSUNIT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSUnit : NSObject <NSCopying, NSSecureCoding>



@property (readonly) Class _effectiveUnitClass;
@property (readonly, copy) NSString *symbol; // ivar: _symbol


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbol:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif