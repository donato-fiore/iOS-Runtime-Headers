// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNESPRESSOHELPERS_H
#define VNESPRESSOHELPERS_H


#import <Foundation/Foundation.h>


@interface VNEspressoHelpers : NSObject



+(BOOL)createSingleNetworkPlanFromResourceName:(id)arg0 usingProcessingDevice:(id)arg1 lowPriorityMode:(BOOL)arg2 inputBlobNames:(id)arg3 outputBlobNames:(id)arg4 networkConfiguration:(id)arg5 espressoResources:(*id)arg6 error:(*id)arg7 ;
+(BOOL)createSingleNetworkPlanFromResourceName:(id)arg0 usingProcessingDevice:(id)arg1 lowPriorityMode:(BOOL)arg2 inputBlobNames:(id)arg3 outputBlobNames:(id)arg4 networkConfiguration:(id)arg5 explicitNetworkLayersStorageType:(int)arg6 espressoResources:(*id)arg7 error:(*id)arg8 ;
+(BOOL)feedForwardEspressoBufferForNetwork:(struct ? *)arg0 fromBufferWithName:(id)arg1 toBufferWithName:(id)arg2 firstFrame:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)getWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 ofBlobNamed:(id)arg2 forNetworkModelFileWithName:(id)arg3 error:(*id)arg4 ;
+(BOOL)renderEspressoBufferImage:(struct ? *)arg0 intoCVPixelBuffer:(struct __CVBuffer *)arg1 error:(*id)arg2 ;
+(NSUInteger)pixelValueSizeInBytesForBuffer:(struct ? *)arg0 error:(*id)arg1 ;
+(id)_locateFrameworkBundleForResourceWithName:(id)arg0 resourceDirectory:(*id)arg1 error:(*id)arg2 ;
+(id)pathForEspressoNetworkModelFileWithName:(id)arg0 error:(*id)arg1 ;
+(id)pathForEspressoResource:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
+(id)pathForEspressoResourceWithFilename:(id)arg0 error:(*id)arg1 ;
+(struct __CVBuffer *)createCVPixelBufferWithPixelFormat:(unsigned int)arg0 fromImageInEspressoBuffer:(struct ? *)arg1 error:(*id)arg2 ;


@end


#endif