// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMIOSSCRUBBERCOLLECTIONVIEW_H
#define PMIOSSCRUBBERCOLLECTIONVIEW_H

@class UICollectionView;
@protocol PMiOSScrubberCollectionViewDelegate;



@interface PMiOSScrubberCollectionView : UICollectionView

@property (weak, nonatomic) NSObject<PMiOSScrubberCollectionViewDelegate> *collectionViewDelegate; // ivar: _collectionViewDelegate


-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif