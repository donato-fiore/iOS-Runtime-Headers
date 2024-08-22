// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETDATATENSOR_H
#define ETDATATENSOR_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface ETDataTensor : NSObject {
    shared_ptr<Espresso::blob<float, 4>> _blob;
    vector<std::shared_ptr<unsigned char>, std::allocator<std::shared_ptr<unsigned char>>> _allocatedImageData;
}


@property ? allocatedImageData;
@property ? blob;
@property (retain, nonatomic) NSArray *dataArray; // ivar: _dataArray
@property (nonatomic) *void dataPointer; // ivar: _dataPointer
@property float_buffer_t float_buffer; // ivar: _float_buffer
@property vImage_Buffer imageBuffer; // ivar: _imageBuffer
@property (retain, nonatomic) NSNumber *maxNumberOfElements; // ivar: _maxNumberOfElements
@property (retain, nonatomic) NSArray *shape; // ivar: _shape
@property (retain, nonatomic) NSArray *strides; // ivar: _strides
@property (nonatomic) NSUInteger type; // ivar: _type


-(?)initWithBlobContainer;
-(id)initWithBlobContainer:(struct shared_ptr<Espresso::abstract_blob_container> )arg0 directBind:(BOOL)arg1 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 imageParameters:(id)arg1 error:(*id)arg2 ;
-(id)initWithData:(*void)arg0 type:(NSUInteger)arg1 shape:(id)arg2 strides:(id)arg3 ;


@end


#endif