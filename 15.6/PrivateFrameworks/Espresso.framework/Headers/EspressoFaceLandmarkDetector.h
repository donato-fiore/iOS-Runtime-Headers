// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(?)detect:(?)arg0 face:(?)arg1 sublandmarkdoFaceRectFix;
-(?)extractSubLandmarksFromCrop192centers192;
-(?)initWithNetworkAtPath:(?)arg0 context:(?)arg1 platformcomputePath;
-(id)init;
-(id)initWithNetworkAtPath:(id)arg0 contextObjC:(id)arg1 platform:(int)arg2 computePath:(int)arg3 ;
-(struct vector<FaceLandmarkDetectorPoint, std::allocator<FaceLandmarkDetectorPoint>> )detectInImageRect:(struct vImage_Buffer )arg0 face:(struct CGRect )arg1 sublandmark:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif