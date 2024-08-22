// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESPRESSOFACELANDMARKDETECTOR_H
#define ESPRESSOFACELANDMARKDETECTOR_H


#import <Foundation/Foundation.h>


@interface EspressoFaceLandmarkDetector : NSObject {
    vImage_Buffer crop_scaled;
    vImage_Buffer crop_192;
    ? net;
    ? net_detect;
    vector<std::shared_ptr<Espresso::net>, std::allocator<std::shared_ptr<Espresso::net>>> nets_sub_landmark;
}


@property CGRect newface; // ivar: _newface


-(?)commonInit:(?)arg0 context:(?)arg1 platformcomputePath;
-(?)detectInImageRect:(?)arg0 facesublandmark;
-(?)extractSubLandmarksFromCrop192centers192;
-(?)initWithNetworkAtPath:(?)arg0 context:(?)arg1 platformcomputePath;
-(id)init;
-(id)initWithNetworkAtPath:(id)arg0 contextObjC:(id)arg1 platform:(int)arg2 computePath:(int)arg3 ;
-(struct vector<FaceLandmarkDetectorPoint, std::allocator<FaceLandmarkDetectorPoint>> )detect:(struct vImage_Buffer )arg0 face:(struct CGRect )arg1 sublandmark:(BOOL)arg2 doFaceRectFix:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif