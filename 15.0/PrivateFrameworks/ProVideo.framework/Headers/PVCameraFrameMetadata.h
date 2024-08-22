// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVCAMERAFRAMEMETADATA_H
#define PVCAMERAFRAMEMETADATA_H


#import <Foundation/Foundation.h>


@interface PVCameraFrameMetadata : NSObject

@property (readonly, nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (readonly, nonatomic) NSInteger captureVideoOrientation; // ivar: _captureVideoOrientation
@property (readonly, nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, nonatomic) ? orientation; // ivar: _orientation
@property (readonly, nonatomic) CGFloat rollRadians; // ivar: _rollRadians


+(id)frameMetadata:(NSInteger)arg0 ;
-(id)description;


@end


#endif