// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI33GKMULTIPLAYERVIEWCONTROLLERLAYOUT_H
#define _TTC12GAMECENTERUI33GKMULTIPLAYERVIEWCONTROLLERLAYOUT_H

@class UICollectionViewFlowLayout;



@interface _TtC12GameCenterUI33GKMultiplayerViewControllerLayout : UICollectionViewFlowLayout {
    ? type;
}


@property (nonatomic, readonly) NSInteger cellLayoutMode;
@property (nonatomic, readonly) CGSize collectionViewContentSize;


+(struct UIEdgeInsets )minimumContentInsetIn:(id)arg0 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)prepareLayout;


@end


#endif