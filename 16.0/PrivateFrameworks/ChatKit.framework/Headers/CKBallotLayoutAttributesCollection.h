// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBALLOTLAYOUTATTRIBUTESCOLLECTION_H
#define CKBALLOTLAYOUTATTRIBUTESCOLLECTION_H

@class UICollectionViewLayoutAttributes, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKBallotLayoutAttributesCollection : NSObject <NSCopying>



@property (retain, nonatomic) UICollectionViewLayoutAttributes *ackIconAttributes; // ivar: _ackIconAttributes
@property (retain, nonatomic) NSArray *avatarAttributesCollection; // ivar: _avatarAttributesCollection
@property (retain, nonatomic) UICollectionViewLayoutAttributes *containerAttributes; // ivar: _containerAttributes
@property (retain, nonatomic) NSArray *nameAttributesCollection; // ivar: _nameAttributesCollection
@property (retain, nonatomic) UICollectionViewLayoutAttributes *voteCountAttributes; // ivar: _voteCountAttributes


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_applyAlphaToAllAttributesAlpha:(CGFloat)arg0 ;


@end


#endif