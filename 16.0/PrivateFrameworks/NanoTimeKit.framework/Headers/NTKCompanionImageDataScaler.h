// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOMPANIONIMAGEDATASCALER_H
#define NTKCOMPANIONIMAGEDATASCALER_H

@class NSData, UTType;

#import <Foundation/Foundation.h>


@interface NTKCompanionImageDataScaler : NSObject {
    CGFloat _compressionQuality;
    NSData *_outputData;
}


@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) CGRect inputCrop; // ivar: _inputCrop
@property (readonly, nonatomic) CGSize inputSize; // ivar: _inputSize
@property (readonly, nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) CGSize outputSize; // ivar: _outputSize
@property (readonly, nonatomic) UTType *type; // ivar: _type


-(id)initWithSize:(struct CGSize )arg0 crop:(struct CGRect )arg1 data:(id)arg2 orientation:(NSInteger)arg3 outputSize:(struct CGSize )arg4 ;
-(id)initWithSize:(struct CGSize )arg0 crop:(struct CGRect )arg1 data:(id)arg2 orientation:(NSInteger)arg3 type:(id)arg4 outputSize:(struct CGSize )arg5 ;
-(void)cropAndScaleWithCompletion:(id)arg0 ;


@end


#endif