// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMIOSSCRUBBERVIEWCONTROLLER_H
#define PMIOSSCRUBBERVIEWCONTROLLER_H

@class UIViewController, NSString, UIView;
@protocol PMiOSScrubberCollectionViewDelegate, PMScrubberProviderDelegate;


#import "PMiOSScrubberCollectionView.h"
#import "PMScrubberProvider.h"

@interface PMiOSScrubberViewController : UIViewController <PMiOSScrubberCollectionViewDelegate, PMScrubberProviderDelegate>



@property (weak, nonatomic) PMiOSScrubberCollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat itemWidth; // ivar: _itemWidth
@property (weak, nonatomic) UIView *playhead; // ivar: _playhead
@property (retain, nonatomic) PMScrubberProvider *provider; // ivar: _provider
@property (readonly) Class superclass;


-(CGFloat)scrollViewProgress;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(struct CGPoint )scrollViewPlayheadPosition;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)playbackProgressDidChange:(CGFloat)arg0 provider:(id)arg1 ;
-(void)resultUpdated:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setContentInsetWithSize:(struct CGSize )arg0 ;
-(void)touchesBegan;
-(void)touchesEnded;
-(void)updateScrollWithProgress:(CGFloat)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif