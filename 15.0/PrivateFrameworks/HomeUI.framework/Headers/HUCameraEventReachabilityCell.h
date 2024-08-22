// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERAEVENTREACHABILITYCELL_H
#define HUCAMERAEVENTREACHABILITYCELL_H

@class UICollectionViewCell, CALayer, HFCameraScrubberReachabilityEventContainer;



@interface HUCameraEventReachabilityCell : UICollectionViewCell

@property (retain, nonatomic) CALayer *badgeLayer; // ivar: _badgeLayer
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (nonatomic) BOOL needsFullDashedLineWidth; // ivar: _needsFullDashedLineWidth
@property (retain, nonatomic) HFCameraScrubberReachabilityEventContainer *reachabilityEvent; // ivar: _reachabilityEvent


+(id)backgroundColor;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)updateWithReachabilityEventContainer:(id)arg0 mode:(NSUInteger)arg1 ;


@end


#endif