// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSPANORAMAVIEWCONTROLLERPHONESPEC_H
#define PUPHOTOSPANORAMAVIEWCONTROLLERPHONESPEC_H



#import "PUPhotosPanoramaViewControllerSpec.h"
#import "PUPhotosGridViewControllerSpec.h"

@interface PUPhotosPanoramaViewControllerPhoneSpec : PUPhotosPanoramaViewControllerSpec {
    PUPhotosGridViewControllerSpec *_gridSpec;
}




-(id)gridSpec;
-(struct CGSize )_itemSizeForWidth:(CGFloat)arg0 ;


@end


#endif