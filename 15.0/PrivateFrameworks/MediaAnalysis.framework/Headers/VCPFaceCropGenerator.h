// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPFACECROPGENERATOR_H
#define VCPFACECROPGENERATOR_H


#import <Foundation/Foundation.h>


@interface VCPFaceCropGenerator : NSObject



+(id)_faceCropDataForImage:(id)arg0 andNormalizedFaceRect:(struct CGRect )arg1 error:(*id)arg2 ;
+(id)_generateFaceCropWithDescriptor:(id)arg0 andCancelBlock:(id)arg1 error:(*id)arg2 ;
// +(id)generateFaceCropsFromSourceDescriptors:(id)arg0 withProgressBlock:(id)arg1 andFailureBlock:(unk)arg2 andCancelBlock:(id)arg3  ;
+(void)_reportCancellationOfRemainingFaceCropSourceDescriptors:(id)arg0 withStartingIndex:(NSUInteger)arg1 andFailureBlock:(id)arg2 ;


@end


#endif