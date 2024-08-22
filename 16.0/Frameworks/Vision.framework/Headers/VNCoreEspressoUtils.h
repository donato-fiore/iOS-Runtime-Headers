// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCOREESPRESSOUTILS_H
#define VNCOREESPRESSOUTILS_H


#import <Foundation/Foundation.h>


@interface VNCoreEspressoUtils : NSObject



+(BOOL)getInputImageTensorDescriptor:(*id)arg0 forBlobName:(id)arg1 pixelFormatType:(unsigned int)arg2 outputTensorDescriptors:(*id)arg3 forBlobNamesWithTypes:(id)arg4 fromNetworkModelFileWithPath:(id)arg5 error:(*id)arg6 ;
+(id)tensorShapesForBlobNames:(id)arg0 ofNetworkModelFileWithPath:(id)arg1 error:(*id)arg2 ;


@end


#endif