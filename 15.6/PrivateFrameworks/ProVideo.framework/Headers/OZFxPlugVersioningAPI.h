// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OZFXPLUGVERSIONINGAPI_H
#define OZFXPLUGVERSIONINGAPI_H

@class NSString;
@protocol FxVersioningAPI, PROAPIObject;

#import <Foundation/Foundation.h>


@interface OZFxPlugVersioningAPI : NSObject <FxVersioningAPI, PROAPIObject>

 {
    *void _plugin;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(BOOL)updateVersionAtCreation:(unsigned int)arg0 ;
-(id)initWithPlugin:(*void)arg0 ;
-(unsigned int)versionAtCreation;


@end


#endif