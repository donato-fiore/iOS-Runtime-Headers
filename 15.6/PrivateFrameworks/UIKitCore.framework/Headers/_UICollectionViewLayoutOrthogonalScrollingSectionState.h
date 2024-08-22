// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWLAYOUTORTHOGONALSCROLLINGSECTIONSTATE_H
#define _UICOLLECTIONVIEWLAYOUTORTHOGONALSCROLLINGSECTIONSTATE_H

@class NSString;
@protocol _UICollectionViewLayoutOrthogonalScrollingSectionState, NSCopying;

#import <Foundation/Foundation.h>


@interface _UICollectionViewLayoutOrthogonalScrollingSectionState : NSObject <_UICollectionViewLayoutOrthogonalScrollingSectionState, NSCopying>



@property (readonly, nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDirectionalEdgeInsets environmentInsets; // ivar: _environmentInsets
@property (readonly, nonatomic) CGFloat groupDimension; // ivar: _groupDimension
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger layoutAxis; // ivar: _layoutAxis
@property (readonly, nonatomic) CGRect layoutFrame; // ivar: _layoutFrame
@property (readonly, nonatomic) CGPoint orthogonalContentOffset; // ivar: _orthogonalContentOffset
@property (readonly, nonatomic) NSUInteger orthogonalLayoutAxis; // ivar: _orthogonalLayoutAxis
@property (readonly, nonatomic) CGFloat pagingDimension; // ivar: _pagingDimension
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif