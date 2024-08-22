// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLCOLLECTIONVIEW_H
#define HUQUICKCONTROLCOLLECTIONVIEW_H

@class UICollectionView;


#import "HUScrollGestureRecognitionResolver.h"

@interface HUQuickControlCollectionView : UICollectionView

@property (readonly, nonatomic) HUScrollGestureRecognitionResolver *scrollGestureResolver; // ivar: _scrollGestureResolver


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;


@end


#endif