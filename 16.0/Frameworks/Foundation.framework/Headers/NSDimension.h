// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSDIMENSION_H
#define NSDIMENSION_H

@protocol NSSecureCoding;


#import "NSUnit.h"
#import "NSUnitConverter.h"
#import "NSString.h"

@interface NSDimension : NSUnit <NSSecureCoding>



@property (readonly, copy) NSUnitConverter *converter; // ivar: _converter
@property (readonly) NSString *icuSubtype; // ivar: _icuSubtype
@property (readonly) NSUInteger specifier; // ivar: _reserved


+(BOOL)supportsRegionalPreference;
+(BOOL)supportsSecureCoding;
+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)baseUnit;
+(id)icuType;
-(BOOL)isEqual:(id)arg0 ;
-(id)dimension;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpecifier:(NSUInteger)arg0 symbol:(id)arg1 converter:(id)arg2 ;
-(id)initWithSymbol:(id)arg0 converter:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif