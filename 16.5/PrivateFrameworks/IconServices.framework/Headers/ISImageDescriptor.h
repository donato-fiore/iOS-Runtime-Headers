// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISIMAGEDESCRIPTOR_H
#define ISIMAGEDESCRIPTOR_H

@class NSString, NSUUID, IFColor;
@protocol NSSecureCoding, ISImageDescriptor, NSCopying;

#import <Foundation/Foundation.h>


@interface ISImageDescriptor : NSObject <NSSecureCoding, ISImageDescriptor, NSCopying>



@property (nonatomic) NSInteger appearance; // ivar: _appearance
@property (nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (nonatomic) NSUInteger badgeOptions; // ivar: _badgeOptions
@property (readonly, nonatomic) CGFloat continuousCornerRadius;
@property (nonatomic) NSInteger contrast; // ivar: _contrast
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUUID *digest;
@property (nonatomic) BOOL drawBadge;
@property (nonatomic) BOOL drawBorder;
@property (nonatomic) BOOL graphicVariant; // ivar: _graphicVariant
@property (readonly) NSUInteger hash;
@property BOOL ignoreCache; // ivar: _ignoreCache
@property NSUInteger languageDirection; // ivar: _languageDirection
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property BOOL preferExtendedColorResources; // ivar: _preferExtendedColorResources
@property (retain) NSString *preferedResourceName; // ivar: _preferedResourceName
@property (readonly) CGFloat sanitizedScale;
@property (readonly) CGSize sanitizedSize;
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL selectedVariant;
@property (nonatomic) NSUInteger shape;
@property (nonatomic) BOOL shouldApplyMask;
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (nonatomic) BOOL templateVariant;
@property (retain, nonatomic) IFColor *tintColor; // ivar: _tintColor
@property (nonatomic) NSUInteger variantOptions; // ivar: _variantOptions
@property (nonatomic) NSInteger vibrancy; // ivar: _vibrancy


+(BOOL)supportsSecureCoding;
+(id)icnsImageDescriptors;
+(id)imageDescriptorNamed:(id)arg0 ;
+(id)imageDescriptorWithIconVariant:(int)arg0 options:(int)arg1 ;
-(id)_recipe;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif