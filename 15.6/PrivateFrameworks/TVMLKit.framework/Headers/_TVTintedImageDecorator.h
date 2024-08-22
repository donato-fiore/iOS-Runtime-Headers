// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVTINTEDIMAGEDECORATOR_H
#define _TVTINTEDIMAGEDECORATOR_H

@class IKColor;


#import "TVImageScaleDecorator.h"

@interface _TVTintedImageDecorator : TVImageScaleDecorator

@property (readonly, retain, nonatomic) IKColor *tintColor; // ivar: _tintColor


-(id)decoratorIdentifier;
-(id)initWithTintColor:(id)arg0 ;
-(void)drawInContext:(id)arg0 imageRect:(struct CGRect )arg1 ;


@end


#endif