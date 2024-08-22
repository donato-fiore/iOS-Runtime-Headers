// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIDESDATASETSAMPLE_H
#define HMIDESDATASETSAMPLE_H

@class HMFObject, NSArray, NSData;



@interface HMIDESDatasetSample : HMFObject {
    *float _boxesTensorData;
    *float _weightsTensorData;
    *float _classesTensorData;
}


@property (readonly) NSArray *detections; // ivar: _detections
@property (readonly) NSData *imageData; // ivar: _imageData
@property (readonly) CGRect regionOfInterest; // ivar: _regionOfInterest


+(id)logCategory;
+(void)saveDESRecordWithVideoFrame:(id)arg0 recordInfo:(id)arg1 ;
-(id)augmentWithOptions:(id)arg0 ;
-(id)createBoxesTensorWithError:(*id)arg0 ;
-(id)createClassesTensorWithError:(*id)arg0 ;
-(id)createImageTensorWithError:(*id)arg0 ;
-(id)createWeightsTensorWithError:(*id)arg0 ;
-(id)initWithImageData:(id)arg0 regionOfInterest:(struct CGRect )arg1 detections:(id)arg2 ;
-(struct __CVBuffer *)createRegionOfInterestPixelBufferWithError:(*id)arg0 ;
-(void)dealloc;


@end


#endif