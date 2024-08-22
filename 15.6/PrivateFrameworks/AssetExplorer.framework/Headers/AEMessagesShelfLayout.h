// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEMESSAGESSHELFLAYOUT_H
#define AEMESSAGESSHELFLAYOUT_H

@class PXAssetsTilingLayout;
@protocol AEMessagesShelfLayoutDelegate;



@interface AEMessagesShelfLayout : PXAssetsTilingLayout {
    *CGRect _itemFramesForCurrentDataSource;
    CGFloat _currentContentWidth;
    BOOL _wasPreparedAtLeastOnce;
}


@property (weak, nonatomic) NSObject<AEMessagesShelfLayoutDelegate> *delegate; // ivar: _delegate


-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(CGFloat)_zPositionForShelfTileKind:(NSUInteger)arg0 atIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(struct CGRect )_cancelButtonFrameForGridFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameForGridItemAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct CGRect )_gradientShadowFrameForItemFrame:(struct CGRect )arg0 ;
-(struct CGRect )_irisToggleFrameForGridFrame:(struct CGRect )arg0 ;
-(struct CGRect )_loopBadgeFrameForItemFrame:(struct CGRect )arg0 ;
-(struct CGRect )_videoBadgeFrameForItemFrame:(struct CGRect )arg0 ;
-(struct CGRect )_videoDurationFrameForItemFrame:(struct CGRect )arg0 ;
-(struct CGRect )contentBounds;
-(void)dealloc;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)prepareLayout;
-(void)setReferenceSize:(struct CGSize )arg0 ;


@end


#endif