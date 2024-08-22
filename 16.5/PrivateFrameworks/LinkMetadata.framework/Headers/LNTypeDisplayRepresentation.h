// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNTYPEDISPLAYREPRESENTATION_H
#define LNTYPEDISPLAYREPRESENTATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNStaticDeferredLocalizedString.h"

@interface LNTypeDisplayRepresentation : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *name; // ivar: _name
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *numericFormat; // ivar: _numericFormat


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 numericFormat:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif