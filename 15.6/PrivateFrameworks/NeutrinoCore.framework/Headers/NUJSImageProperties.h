// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUJSIMAGEPROPERTIES_H
#define NUJSIMAGEPROPERTIES_H

@class NSString, NSDictionary;
@protocol NUJSImagePropertiesExport, NUImageProperties;


#import "NUJSProxy.h"
#import "NUJSDepthProperties.h"
#import "NUJSRAWImageProperties.h"

@interface NUJSImageProperties : NUJSProxy <NUJSImagePropertiesExport>



@property (readonly) NUJSDepthProperties *depthProperties;
@property (readonly) NSString *fileUTI;
@property (readonly) NSObject<NUImageProperties> *imageProperties;
@property (readonly) NSDictionary *metadata;
@property (readonly) NUJSRAWImageProperties *rawImageProperties;


-(id)initWithImageProperties:(id)arg0 context:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;


@end


#endif