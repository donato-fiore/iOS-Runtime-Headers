// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTHUMBNAILUTILITIES_H
#define PLTHUMBNAILUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLThumbnailUtilities : NSObject



+(BOOL)_performSWDownscaleTo5551OnSourceImage:(struct CGImage *)arg0 withSourceDimensions:(struct ? )arg1 withSpecification:(id)arg2 destinationData:(id)arg3 imageRect:(struct CGRect *)arg4 bytesPerRow:(*int)arg5 ;
+(BOOL)_validateSpecification:(id)arg0 destinationData:(*id)arg1 ;
+(BOOL)_validateSpecifications:(id)arg0 destinationData:(*id)arg1 ;
+(BOOL)performHWCascadingDownscaleTo5551OnIOSurface:(struct __IOSurface *)arg0 withSpecifications:(id)arg1 destinationData:(*id)arg2 usingContext:(id)arg3 ;
+(BOOL)performSWCascadingDownscaleTo5551OnImage:(struct CGImage *)arg0 withSpecifications:(id)arg1 destinationData:(*id)arg2 ;
+(BOOL)performSWDownscaleTo5551OnImage:(struct CGImage *)arg0 withSpecification:(id)arg1 destinationData:(*id)arg2 imageRect:(struct CGRect *)arg3 bytesPerRow:(*int)arg4 ;
+(id)_destinationDataArrayFromSpecifications:(id)arg0 ;
+(id)_destinationDataFromSpecification:(id)arg0 ;
+(int)_bytesPerRowForSpecification:(id)arg0 ;
+(int)_requiredDataLengthForSpecification:(id)arg0 ;


@end


#endif