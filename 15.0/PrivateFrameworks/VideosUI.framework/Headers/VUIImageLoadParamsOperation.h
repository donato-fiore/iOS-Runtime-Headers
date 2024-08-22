// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIIMAGELOADPARAMSOPERATION_H
#define VUIIMAGELOADPARAMSOPERATION_H

@class VUIAsynchronousOperation, NSString, NSError, TVImage;
@protocol VUIImageLoadingOperation, VUIImageLoadParams;



@interface VUIImageLoadParamsOperation : VUIAsynchronousOperation <VUIImageLoadingOperation>



@property (nonatomic) BOOL cropToFit; // ivar: _cropToFit
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVImage *image; // ivar: _image
@property (retain, nonatomic) NSObject<VUIImageLoadParams> *params; // ivar: _params
@property (nonatomic) CGSize scaleToSize; // ivar: _scaleToSize
@property (nonatomic) NSUInteger scalingResult; // ivar: _scalingResult
@property (readonly) Class superclass;


-(id)init;
-(id)initWithParams:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 ;


@end


#endif