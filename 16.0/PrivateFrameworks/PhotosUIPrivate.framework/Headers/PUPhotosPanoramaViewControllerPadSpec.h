// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSPANORAMAVIEWCONTROLLERPADSPEC_H
#define PUPHOTOSPANORAMAVIEWCONTROLLERPADSPEC_H



#import "PUPhotosPanoramaViewControllerSpec.h"
#import "PUPhotosGridViewControllerSpec.h"

@interface PUPhotosPanoramaViewControllerPadSpec : PUPhotosPanoramaViewControllerSpec {
    PUPhotosGridViewControllerSpec *_gridSpec;
}




-(id)gridSpec;
-(struct CGSize )_itemSizeForWidth:(CGFloat)arg0 ;


@end


#endif