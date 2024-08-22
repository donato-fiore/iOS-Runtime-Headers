// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSCRIPTCOLLECTIONVIEWLAYOUTATTRIBUTES_H
#define CKTRANSCRIPTCOLLECTIONVIEWLAYOUTATTRIBUTES_H

@class UICollectionViewLayoutAttributes, NSMutableArray, NSArray;


#import "CKTranscriptCollectionViewLayoutAttributes.h"
#import "CKChatItem.h"

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    CGRect _targetFrame;
    CGRect _currentFrame;
    CGFloat _easing;
    CGFloat _targetEasing;
    char _orientation;
    CGFloat _targetCenterY;
    CGFloat _currentCenterY;
    CGFloat _height;
    CGFloat _factor;
    BOOL _hidden;
    CGFloat _associatedVerticalShift;
    NSMutableArray *_associatedLayoutAttributes;
    CKTranscriptCollectionViewLayoutAttributes *_initialParentLayoutAttributes;
    NSArray *_threadGroupLayoutAttributes;
}


@property (retain, nonatomic) CKChatItem *chatItem; // ivar: _chatItem
@property (readonly, nonatomic) CATransform3D contentTransform3D; // ivar: _contentTransform3D
@property (nonatomic, getter=isInsertingReply) BOOL insertingReply; // ivar: _insertingReply
@property (nonatomic) CGSize parentChatItemSize; // ivar: _parentChatItemSize
@property (nonatomic) CGFloat parentRotationOffset; // ivar: _parentRotationOffset


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithLayoutAttributes:(id)arg0 ;
-(void)setAlphaOrFilterLevel:(CGFloat)arg0 ;


@end


#endif