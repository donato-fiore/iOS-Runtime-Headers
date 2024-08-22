// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISDROPSHADDOWEFFECT_H
#define ISDROPSHADDOWEFFECT_H

@class IFColor, NSString;
@protocol ISEffect;

#import <Foundation/Foundation.h>


@interface ISDropShaddowEffect : NSObject <ISEffect>



@property CGFloat blur; // ivar: _blur
@property (retain) IFColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGSize offset; // ivar: _offset
@property CGFloat scale; // ivar: _scale
@property CGFloat spread; // ivar: _spread
@property (readonly) Class superclass;


-(id)filterWithBackgroundImage:(id)arg0 inputImage:(id)arg1 ;
-(id)init;


@end


#endif