// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIRESOURCEIMAGEDESCRIPTOR_H
#define VUIRESOURCEIMAGEDESCRIPTOR_H

@class NSString, UIColor, UIImageSymbolConfiguration;

#import <Foundation/Foundation.h>


@interface VUIResourceImageDescriptor : NSObject

@property (copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (readonly, nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) _VUICornerRadii borderRadii; // ivar: _borderRadii
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (readonly, nonatomic) CGSize containerSize; // ivar: _containerSize
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=shouldRenderAsTemplate) BOOL renderAsTemplate; // ivar: _renderAsTemplate
@property (nonatomic) NSInteger scaleMode; // ivar: _scaleMode
@property (nonatomic) BOOL scaleToSize; // ivar: _scaleToSize
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) UIImageSymbolConfiguration *symbolConfiguration; // ivar: _symbolConfiguration
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithResource:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithResource:(id)arg0 size:(struct CGSize )arg1 containerSize:(struct CGSize )arg2 ;
-(id)initWithSymbol:(id)arg0 size:(struct CGSize )arg1 symbolConfiguration:(id)arg2 ;


@end


#endif