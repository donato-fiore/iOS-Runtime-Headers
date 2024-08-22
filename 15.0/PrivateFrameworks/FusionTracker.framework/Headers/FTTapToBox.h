// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTTAPTOBOX_H
#define FTTAPTOBOX_H


#import <Foundation/Foundation.h>


@interface FTTapToBox : NSObject {
    unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> _net;
    PixelBufferTensor _inputImageTensor;
    PixelBufferTensor _inputTapTensor;
    unordered_map<std::string, ik::Tensor, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, ik::Tensor>>> _inputMap;
    EspressoTensor _outputTensor;
}




+(BOOL)preprocessForTap:(struct CGPoint )arg0 inSourceImageBuffer:(struct __CVBuffer *)arg1 destinationImageBuffer:(struct __CVBuffer *)arg2 tapBuffer:(struct __CVBuffer *)arg3 scaler:(id)arg4 ;
+(BOOL)renderTap:(struct CGPoint )arg0 inBuffer:(struct __CVBuffer *)arg1 ;
+(CGFloat)defaultConfidenceThreshold;
+(id)networkDescriptor;
+(id)networkPath;
+(struct ? )postProcessNetworkOutput:(struct ? *)arg0 ;
+(struct CGSize )networkInputImageSize;
+(struct CGSize )networkInputTapImageSize;
-(id)init;
-(struct ? )predictionForTap:(struct CGPoint )arg0 inBuffer:(struct __CVBuffer *)arg1 scaler:(id)arg2 ;
-(struct CGRect )predictBoxForTap:(struct CGPoint )arg0 inBuffer:(struct __CVBuffer *)arg1 scaler:(id)arg2 ;


@end


#endif