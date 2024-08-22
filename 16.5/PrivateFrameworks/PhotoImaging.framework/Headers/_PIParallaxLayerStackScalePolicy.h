// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXLAYERSTACKSCALEPOLICY_H
#define _PIPARALLAXLAYERSTACKSCALEPOLICY_H

@class NSString, PFParallaxLayout;
@protocol NUScalePolicy;

#import <Foundation/Foundation.h>


@interface _PIParallaxLayerStackScalePolicy : NSObject <NUScalePolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (readonly) Class superclass;


-(id)initWithLayout:(id)arg0 ;
-(struct ? )scaleForImageSize:(struct ? )arg0 ;


@end


#endif