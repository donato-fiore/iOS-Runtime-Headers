// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OZFXPLUGHOSTPROPERTIESAPI_H
#define OZFXPLUGHOSTPROPERTIESAPI_H

@class NSString;
@protocol FxHostPropertiesAPI, PROAPIObject;

#import <Foundation/Foundation.h>


@interface OZFxPlugHostPropertiesAPI : NSObject <FxHostPropertiesAPI, PROAPIObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedHostPropertiesAPI;
+(void)releaseSharedHostPropertiesAPI;
-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(id)hostProperties;


@end


#endif