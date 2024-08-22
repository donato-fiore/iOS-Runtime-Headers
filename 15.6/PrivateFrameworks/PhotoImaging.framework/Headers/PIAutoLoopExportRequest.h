// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIAUTOLOOPEXPORTREQUEST_H
#define PIAUTOLOOPEXPORTREQUEST_H

@class NUVideoExportRequest, NSURL, NSString, NUColorSpace;



@interface PIAutoLoopExportRequest : NUVideoExportRequest

@property (readonly) NSURL *destinationLongExposureURL; // ivar: _destinationLongExposureURL
@property (readonly) NSURL *destinationMaskURL; // ivar: _destinationMaskURL
@property (readonly) NSString *destinationUTI; // ivar: _destinationUTI
@property (readonly) NUColorSpace *outputColorSpace;


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 destinationURL:(id)arg1 ;
-(id)initWithComposition:(id)arg0 stabilizedVideoURL:(id)arg1 longExposureDestinationURL:(id)arg2 maskDestinationURL:(id)arg3 destinationUTI:(id)arg4 ;
-(id)initWithRequest:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif