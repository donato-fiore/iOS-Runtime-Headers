// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKIMAGEPREPROCESSINGPARAMS_H
#define ABPKIMAGEPREPROCESSINGPARAMS_H


#import <Foundation/Foundation.h>

#import "ABPKCropParams.h"
#import "ABPKPaddingParams.h"
#import "ABPKDirectScalingParams.h"

@interface ABPKImagePreProcessingParams : NSObject

@property (readonly, nonatomic) ABPKCropParams *cropParams; // ivar: _cropParams
@property (readonly, nonatomic) CGSize inputResolution; // ivar: _inputResolution
@property (readonly, nonatomic) CGSize outputResolution; // ivar: _outputResolution
@property (readonly, nonatomic) ABPKPaddingParams *paddingParams; // ivar: _paddingParams
@property (readonly, nonatomic) ABPKDirectScalingParams *scalingParams; // ivar: _scalingParams
@property (readonly, nonatomic) int type; // ivar: _type


+(id)convert2DPointtoInputSpaceWithParams;
-(id)initWithType:(int)arg0 inputResolution:(struct CGSize )arg1 outputResolution:(struct CGSize )arg2 ;
-(void)printData;


@end


#endif