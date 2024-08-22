// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXGRADIENTFACTORY_H
#define SXGRADIENTFACTORY_H

@class NSString;
@protocol SXGradientFactory;

#import <Foundation/Foundation.h>


@interface SXGradientFactory : NSObject <SXGradientFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)colorsFromColorStops:(id)arg0 ;
-(id)gradientForColorStops:(id)arg0 angle:(CGFloat)arg1 ;
-(id)locationsFromColorStops:(id)arg0 ;


@end


#endif