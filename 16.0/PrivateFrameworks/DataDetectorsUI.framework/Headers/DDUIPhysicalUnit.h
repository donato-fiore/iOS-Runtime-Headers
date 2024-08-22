// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDUIPHYSICALUNIT_H
#define DDUIPHYSICALUNIT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "DDUIPhysicalUnitGroup.h"

@interface DDUIPhysicalUnit : NSObject

@property (readonly) CGFloat a; // ivar: _a
@property (readonly) NSString *abbreviation; // ivar: _abbreviation
@property (readonly) CGFloat b; // ivar: _b
@property (weak) DDUIPhysicalUnitGroup *group; // ivar: _group
@property (readonly) NSUInteger groupType; // ivar: _groupType
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSArray *restrictionLocales; // ivar: _restrictionLocales


+(id)unitWithIdentifier:(id)arg0 ;
-(BOOL)inputValueIsValid:(CGFloat)arg0 fromUnit:(id)arg1 ;
-(BOOL)isUK;
-(CGFloat)baseToUnit:(CGFloat)arg0 ;
-(CGFloat)unitToBase:(CGFloat)arg0 ;
-(CGFloat)valueFrom:(CGFloat)arg0 unit:(id)arg1 ;
-(id)floatFormatString:(id)arg0 precision:(NSInteger)arg1 exp:(BOOL)arg2 ;
-(id)initWithName:(id)arg0 abbreviation:(id)arg1 restrictionLocales:(id)arg2 groupType:(NSUInteger)arg3 a:(CGFloat)arg4 b:(CGFloat)arg5 ;
-(id)localizedConvertedValueFormat:(id)arg0 ;
-(id)localizedConvertedValueFrom:(CGFloat)arg0 unit:(id)arg1 ;
-(id)localizedMenuTitleFormat:(id)arg0 ;
-(id)localizedTitleFormat:(id)arg0 ;
-(id)localizedUnitNameWithValue:(CGFloat)arg0 unit:(id)arg1 ;
-(id)valueAsString:(CGFloat)arg0 ;


@end


#endif