// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISBORDEREFFECT_H
#define ISBORDEREFFECT_H

@class IFColor, NSString;
@protocol ISEffect;

#import <Foundation/Foundation.h>


@interface ISBorderEffect : NSObject <ISEffect>



@property (retain) IFColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGFloat lineWidth; // ivar: _lineWidth
@property (readonly) Class superclass;


-(id)filterWithBackgroundImage:(id)arg0 inputImage:(id)arg1 ;
-(id)initWithLineWidth:(CGFloat)arg0 color:(id)arg1 ;


@end


#endif