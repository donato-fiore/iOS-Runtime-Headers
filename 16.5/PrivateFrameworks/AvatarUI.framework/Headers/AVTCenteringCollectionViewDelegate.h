// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCENTERINGCOLLECTIONVIEWDELEGATE_H
#define AVTCENTERINGCOLLECTIONVIEWDELEGATE_H

@class UICollectionViewLayoutAttributes, UICollectionView, NSString, UISelectionFeedbackGenerator, NSIndexPath;
@protocol UICollectionViewDelegate, AVTUILogger;

#import <Foundation/Foundation.h>


@interface AVTCenteringCollectionViewDelegate : NSObject <UICollectionViewDelegate>



@property (readonly, nonatomic) UICollectionViewLayoutAttributes *centerItemAttributes;
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<UICollectionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *lastHapticOnScrollIndexPath; // ivar: _lastHapticOnScrollIndexPath
@property (retain, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (nonatomic) CGPoint previousOffset; // ivar: _previousOffset
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCollectionView:(id)arg0 delegate:(id)arg1 environment:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;


@end


#endif