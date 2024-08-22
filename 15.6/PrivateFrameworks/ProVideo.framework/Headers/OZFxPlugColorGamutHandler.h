// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OZFXPLUGCOLORGAMUTHANDLER_H
#define OZFXPLUGCOLORGAMUTHANDLER_H

@class NSString;
@protocol PROAPIObject, FxColorGamutAPI;

#import <Foundation/Foundation.h>


@interface OZFxPlugColorGamutHandler : NSObject <PROAPIObject, FxColorGamutAPI>

 {
    *void sharedBase;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)colorMatrixFromDesiredRGBToYCbCrAtTime;
-(?)colorMatrixFromYCbCrToDesiredRGBAtTime;
-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(NSUInteger)colorPrimaries;
-(id)colorMatrixFromDesiredRGBToYCbCr;
-(id)colorMatrixFromYCbCrToDesiredRGB;
-(id)initWithPlugin:(*void)arg0 ;
-(id)pcFloat33MatrixToFxMatrix44:(*float)arg0 ;


@end


#endif