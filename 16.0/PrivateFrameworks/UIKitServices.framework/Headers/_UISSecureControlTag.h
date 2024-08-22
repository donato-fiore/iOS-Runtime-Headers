// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISSECURECONTROLTAG_H
#define _UISSECURECONTROLTAG_H

@protocol NSSecureCoding;


#import "UISSlotTag.h"
#import "_UISSecureControlCategory.h"

@interface _UISSecureControlTag : UISSlotTag <NSSecureCoding>



@property (readonly, nonatomic) *CGColor baseBackgroundColor; // ivar: _baseBackgroundColor
@property (readonly, nonatomic) *CGColor baseForegroundColor; // ivar: _baseForegroundColor
@property (readonly, nonatomic) _UISSecureControlCategory *category; // ivar: _category
@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) NSInteger cornerStyle; // ivar: _cornerStyle
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(BOOL)supportsSecureCoding;
+(NSUInteger)cacheLimit;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)authenticationMessageContextForStyle:(id)arg0 ;
-(NSUInteger)failGradeForStyle:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)hitTestInformationMaskForStyle:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCategory:(id)arg0 cornerStyle:(NSInteger)arg1 cornerRadius:(CGFloat)arg2 baseForegroundColor:(struct CGColor *)arg3 baseBackgroundColor:(struct CGColor *)arg4 size:(struct CGSize )arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)resolvedStyleForStyle:(id)arg0 ;
-(unsigned int)secureNameForStyle:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif