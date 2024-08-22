// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFONTDESCRIPTOR_H
#define UIFONTDESCRIPTOR_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIFontDescriptor : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_attributes;
    id *_reserved1;
    id *_reserved2;
    id *_reserved3;
    id *_reserved4;
    id *_reserved5;
}


@property (readonly, nonatomic) NSDictionary *fontAttributes;
@property (readonly, nonatomic) CGAffineTransform matrix;
@property (readonly, nonatomic) CGFloat pointSize;
@property (readonly, nonatomic) NSString *postscriptName;
@property (readonly, nonatomic) unsigned int symbolicTraits;


+(BOOL)supportsSecureCoding;
+(id)_createMungledDictionary:(id)arg0 ;
+(id)_preferredFontDescriptorWithTextStyle:(id)arg0 addingSymbolicTraits:(unsigned int)arg1 design:(id)arg2 weight:(CGFloat)arg3 compatibleWithTraitCollection:(id)arg4 ;
+(id)_preferredFontDescriptorWithTextStyle:(id)arg0 design:(id)arg1 weight:(CGFloat)arg2 ;
+(id)_preferredFontDescriptorWithTextStyle:(id)arg0 design:(id)arg1 weight:(CGFloat)arg2 compatibleWithTraitCollection:(id)arg3 ;
+(id)_preferredFontDescriptorWithTextStyle:(id)arg0 weight:(CGFloat)arg1 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg0 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg0 addingSymbolicTraits:(unsigned int)arg1 options:(NSUInteger)arg2 ;
+(id)fontDescriptorWithFontAttributes:(id)arg0 ;
+(id)fontDescriptorWithName:(id)arg0 matrix:(struct CGAffineTransform )arg1 ;
+(id)fontDescriptorWithName:(id)arg0 size:(CGFloat)arg1 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg0 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg0 addingSymbolicTraits:(unsigned int)arg1 options:(NSUInteger)arg2 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(Class)classForCoder;
-(id)_NSAffineTransform;
-(id)_attributes;
-(id)_fontDescriptorWithMatrix:(struct CGAffineTransform )arg0 ;
-(id)_swapWithFontAttributes:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_visibleName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fontDescriptorByAddingAttributes:(id)arg0 ;
-(id)fontDescriptorWithDesign:(id)arg0 ;
-(id)fontDescriptorWithFace:(id)arg0 ;
-(id)fontDescriptorWithFamily:(id)arg0 ;
-(id)fontDescriptorWithMatrix:(struct CGAffineTransform )arg0 ;
-(id)fontDescriptorWithSize:(CGFloat)arg0 ;
-(id)fontDescriptorWithSymbolicTraits:(unsigned int)arg0 ;
-(id)fontDescriptorWithSymbolicTraits:(unsigned int)arg0 mask:(unsigned int)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFontAttributes:(id)arg0 ;
-(id)matchingFontDescriptorWithMandatoryKeys:(id)arg0 ;
-(id)matchingFontDescriptorsWithMandatoryKeys:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif