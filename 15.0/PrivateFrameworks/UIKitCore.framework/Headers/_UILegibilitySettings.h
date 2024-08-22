// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UILEGIBILITYSETTINGS_H
#define _UILEGIBILITYSETTINGS_H

@class NSString;
@protocol NSSecureCoding, NSCopying, BSXPCCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UILegibilitySettings : NSObject <NSSecureCoding, NSCopying, BSXPCCoding>



@property (retain, nonatomic) UIColor *contentColor; // ivar: _contentColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat imageOutset; // ivar: _imageOutset
@property (nonatomic) CGFloat minFillHeight; // ivar: _minFillHeight
@property (retain, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (retain, nonatomic) UIColor *secondaryColor; // ivar: _secondaryColor
@property (nonatomic) CGFloat shadowAlpha; // ivar: _shadowAlpha
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (copy, nonatomic) NSString *shadowCompositingFilterName; // ivar: _shadowCompositingFilterName
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)sharedInstanceForStyle:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentColor:(id)arg0 ;
-(id)initWithContentColor:(id)arg0 contrast:(CGFloat)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 contentColor:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 primaryColor:(id)arg1 secondaryColor:(id)arg2 shadowColor:(id)arg3 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)setPropertiesForStyle:(NSInteger)arg0 ;


@end


#endif