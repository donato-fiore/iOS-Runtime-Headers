// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUICOMMONCOLLECTIONVIEW_H
#define AMSUICOMMONCOLLECTIONVIEW_H

@class UICollectionView;
@protocol AMSUICommonCollectionViewDelegate, UICollectionViewDelegate;


#import "AMSUICommonCollectionViewHandler.h"

@interface AMSUICommonCollectionView : UICollectionView

@property (weak, nonatomic) NSObject<AMSUICommonCollectionViewDelegate> *commonDelegate;
@property (weak, nonatomic) NSObject<UICollectionViewDelegate> *delegate;
@property (readonly, nonatomic) AMSUICommonCollectionViewHandler *handler; // ivar: _handler


-(id)init;


@end


#endif