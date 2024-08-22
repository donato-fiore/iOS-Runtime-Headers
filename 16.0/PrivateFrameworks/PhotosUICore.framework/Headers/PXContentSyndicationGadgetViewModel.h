// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTSYNDICATIONGADGETVIEWMODEL_H
#define PXCONTENTSYNDICATIONGADGETVIEWMODEL_H

@class NSMutableDictionary, UIImage, NSAttributedString, SLHighlight;


#import "PXObservable.h"

@interface PXContentSyndicationGadgetViewModel : PXObservable {
    NSMutableDictionary *_keyImages;
}


@property (readonly, copy, nonatomic) UIImage *avatarImage; // ivar: _avatarImage
@property (readonly, nonatomic) NSInteger keyImageCount; // ivar: _keyImageCount
@property (readonly, copy, nonatomic) NSAttributedString *overlayTitle; // ivar: _overlayTitle
@property (readonly, nonatomic) SLHighlight *socialLayerHighlight; // ivar: _socialLayerHighlight


-(id)keyImageAtIndex:(NSInteger)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)setKeyImage:(id)arg0 atIndex:(NSInteger)arg1 ;


@end


#endif