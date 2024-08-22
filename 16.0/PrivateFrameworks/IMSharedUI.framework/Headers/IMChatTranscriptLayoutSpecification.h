// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCHATTRANSCRIPTLAYOUTSPECIFICATION_H
#define IMCHATTRANSCRIPTLAYOUTSPECIFICATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IMChatTranscriptLayoutSpecification : NSObject <NSCopying>



@property (nonatomic) CGFloat bottomMargin; // ivar: _bottomMargin
@property (nonatomic) CGFloat largeVerticalItemSpacing; // ivar: _largeVerticalItemSpacing
@property (nonatomic) CGSize layoutBoundsSize; // ivar: _layoutBoundsSize
@property (nonatomic) CGFloat leadingMargin; // ivar: _leadingMargin
@property (nonatomic) CGFloat maximumBubbleWidth; // ivar: _maximumBubbleWidth
@property (nonatomic) CGFloat mediumVerticalItemSpacing; // ivar: _mediumVerticalItemSpacing
@property (nonatomic) CGFloat smallVerticalItemSpacing; // ivar: _smallVerticalItemSpacing
@property (nonatomic) CGFloat topMargin; // ivar: _topMargin
@property (nonatomic) CGFloat trailingMargin; // ivar: _trailingMargin
@property (nonatomic) CGFloat zeroVerticalItemSpacing; // ivar: _zeroVerticalItemSpacing


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif