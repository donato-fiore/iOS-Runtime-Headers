// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT21PARTICIPANTLISTLAYOUT_H
#define _TTC15CONVERSATIONKIT21PARTICIPANTLISTLAYOUT_H

@class UICollectionViewFlowLayout;



@interface _TtC15ConversationKit21ParticipantListLayout : UICollectionViewFlowLayout {
    ? indexPathLayoutAttributes;
    ? lastInvalidatedSize;
    ? calculatedContentSize;
    ? delegate;
}


@property (nonatomic, readonly) CGSize collectionViewContentSize;


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(void)prepareLayout;


@end


#endif