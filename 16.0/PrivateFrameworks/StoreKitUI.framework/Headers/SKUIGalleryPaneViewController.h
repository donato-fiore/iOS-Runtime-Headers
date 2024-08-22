// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGALLERYPANEVIEWCONTROLLER_H
#define SKUIGALLERYPANEVIEWCONTROLLER_H

@class UIViewController;


#import "SKUIMediaComponent.h"
#import "SKUIEmbeddedMediaView.h"

@interface SKUIGalleryPaneViewController : UIViewController

@property (readonly, nonatomic) SKUIMediaComponent *component; // ivar: _component
@property (readonly, nonatomic) NSInteger galleryIndex; // ivar: _galleryIndex
@property (readonly, nonatomic) SKUIEmbeddedMediaView *mediaView;


-(id)initWithMediaComponent:(id)arg0 galleryIndex:(NSInteger)arg1 ;


@end


#endif