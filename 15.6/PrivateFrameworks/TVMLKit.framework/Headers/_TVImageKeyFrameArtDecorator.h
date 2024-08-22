// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVIMAGEKEYFRAMEARTDECORATOR_H
#define _TVIMAGEKEYFRAMEARTDECORATOR_H

@class NSString;


#import "TVImageScaleDecorator.h"

@interface _TVImageKeyFrameArtDecorator : TVImageScaleDecorator

@property (copy, nonatomic) NSString *inlineTitle; // ivar: _inlineTitle


-(id)decorate:(id)arg0 scaledWithSize:(struct CGSize )arg1 croppedToFit:(BOOL)arg2 ;
-(id)decoratorIdentifier;
-(id)initWithInlineTitle:(id)arg0 ;


@end


#endif