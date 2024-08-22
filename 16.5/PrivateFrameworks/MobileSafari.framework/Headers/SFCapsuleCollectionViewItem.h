// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCAPSULECOLLECTIONVIEWITEM_H
#define SFCAPSULECOLLECTIONVIEWITEM_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SFCapsuleView.h"
#import "SFCapsuleCollectionView.h"

@interface SFCapsuleCollectionViewItem : NSObject {
    NSMutableDictionary *_cachedContentSizesByState;
}


@property (nonatomic) NSInteger animationCount; // ivar: _animationCount
@property (nonatomic) BOOL capsuleContentIsValid; // ivar: _capsuleContentIsValid
@property (nonatomic) BOOL capsuleIsDetached; // ivar: _capsuleIsDetached
@property (weak, nonatomic) SFCapsuleView *capsuleView; // ivar: _capsuleView
@property (readonly, weak, nonatomic) SFCapsuleCollectionView *collectionView; // ivar: _collectionView


-(CGFloat)capsuleHeightForWidth:(CGFloat)arg0 defaultHeight:(CGFloat)arg1 state:(NSInteger)arg2 index:(NSInteger)arg3 ;
-(id)initWithCollectionView:(id)arg0 ;
-(void)invalidateCapsuleHeight;


@end


#endif