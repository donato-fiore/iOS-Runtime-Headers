// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISBLUREFFECT_H
#define ISBLUREFFECT_H

@class NSString;
@protocol ISEffect;

#import <Foundation/Foundation.h>


@interface ISBlurEffect : NSObject <ISEffect>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGFloat radius; // ivar: _radius
@property (readonly) Class superclass;


-(id)filterWithBackgroundImage:(id)arg0 inputImage:(id)arg1 ;
-(id)initWithRadius:(CGFloat)arg0 ;


@end


#endif