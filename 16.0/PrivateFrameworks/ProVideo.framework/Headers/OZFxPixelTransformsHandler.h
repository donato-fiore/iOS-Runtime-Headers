// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OZFXPIXELTRANSFORMSHANDLER_H
#define OZFXPIXELTRANSFORMSHANDLER_H

@class NSString;
@protocol PROAPIObject, FxPixelTransformsAPI;

#import <Foundation/Foundation.h>


@interface OZFxPixelTransformsHandler : NSObject <PROAPIObject, FxPixelTransformsAPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(id)init;
-(struct PCMatrix44Tmpl<double> )destinationInversePixelTransform;
-(struct PCMatrix44Tmpl<double> )destinationPixelTransform;
-(struct PCMatrix44Tmpl<double> )inversePixelTransform;
-(struct PCMatrix44Tmpl<double> )pixelTransform;
-(void)setAgent:(*void)arg0 ;
-(void)setPostTransform:(*void)arg0 ;
-(void)setPreTransform:(*void)arg0 ;


@end


#endif