// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPSCENEPRINTDESCRIPTOR_H
#define VCPSCENEPRINTDESCRIPTOR_H

@class VNSceneprint;
@protocol VCPDistanceDescriptorProtocol;

#import <Foundation/Foundation.h>


@interface VCPSceneprintDescriptor : NSObject <VCPDistanceDescriptorProtocol>

 {
    VNSceneprint *_sceneprint;
}




+(BOOL)usePHAssetData;
+(id)descriptorWithData:(id)arg0 ;
+(id)descriptorWithImage:(struct __CVBuffer *)arg0 ;
+(int)preferredPixelFormat;
-(id)initWithData:(id)arg0 ;
-(id)initWithImage:(struct __CVBuffer *)arg0 ;
-(id)serialize;
-(int)computeDistance:(*float)arg0 toDescriptor:(id)arg1 ;


@end


#endif