// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUIMAGEDATAPROVIDER_H
#define SUIMAGEDATAPROVIDER_H

@class ISDataProvider, UIColor;
@protocol NSCopying;


#import "SUImageModifier.h"

@interface SUImageDataProvider : ISDataProvider <NSCopying>



@property (retain) UIColor *fillColor; // ivar: _fillColor
@property CGSize finalSize; // ivar: _finalSize
@property CGFloat inputImageScale; // ivar: _inputImageScale
@property (retain) SUImageModifier *modifier; // ivar: _modifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseData:(id)arg0 returningError:(*id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newImageFromImage:(id)arg0 ;
-(void)_getFinalSize:(struct CGSize *)arg0 imageFrame:(struct CGRect *)arg1 forImage:(id)arg2 withModifier:(id)arg3 ;
-(void)dealloc;


@end


#endif