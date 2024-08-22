// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKCAMERAPARAMS_H
#define ABPKCAMERAPARAMS_H


#import <Foundation/Foundation.h>


@interface ABPKCameraParams : NSObject {
    ? _distortion;
}


@property NSInteger deviceOrientation; // ivar: _deviceOrientation
@property NSInteger deviceType; // ivar: _deviceType
@property ? distortion;
@property ? extrinsics; // ivar: _extrinsics
@property CGSize inputRes; // ivar: _inputRes
@property ? intrinsics; // ivar: _intrinsics
@property BOOL isImageRectified; // ivar: _isImageRectified


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIntrinsics:(struct ? )arg0 andExtrinsics:(struct ? )arg1 andDistortion;
-(id)initWithIntrinsics:(struct ? )arg0 andExtrinsics:(struct ? )arg1 andDistortion:(struct CGSize )arg2 andInputResolution;


@end


#endif