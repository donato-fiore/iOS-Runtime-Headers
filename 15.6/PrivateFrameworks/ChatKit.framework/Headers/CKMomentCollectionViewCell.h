// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMOMENTCOLLECTIONVIEWCELL_H
#define CKMOMENTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSMutableArray;


#import "CKFullScreenEffect.h"

@interface CKMomentCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CKFullScreenEffect *effect; // ivar: _effect
@property (retain, nonatomic) NSMutableArray *effectViews; // ivar: _effectViews


+(id)reuseIdentifier;
-(void)addEffectView:(id)arg0 ;
-(void)animate;
-(void)prepareForReuse;
-(void)setupEffectIfNeeded;
-(void)stopAnimation;


@end


#endif