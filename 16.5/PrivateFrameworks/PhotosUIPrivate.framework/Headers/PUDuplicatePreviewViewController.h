// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUDUPLICATEPREVIEWVIEWCONTROLLER_H
#define PUDUPLICATEPREVIEWVIEWCONTROLLER_H

@class UIViewController, NSArray;


#import "PUStackView.h"

@interface PUDuplicatePreviewViewController : UIViewController {
    PUStackView *_stackView;
}


@property (copy, nonatomic) NSArray *assets; // ivar: _assets
@property (nonatomic) ? stillImageTime; // ivar: _stillImageTime


-(id)initWithAssets:(id)arg0 stillImageTime:(struct ? )arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_handleImageResult:(id)arg0 info:(id)arg1 forIndex:(int)arg2 ;
-(void)_handleVideoResult:(id)arg0 info:(id)arg1 forIndex:(int)arg2 ;
-(void)viewDidLoad;


@end


#endif