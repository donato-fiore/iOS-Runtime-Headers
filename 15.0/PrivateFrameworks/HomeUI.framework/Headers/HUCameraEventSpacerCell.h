// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERAEVENTSPACERCELL_H
#define HUCAMERAEVENTSPACERCELL_H

@class UICollectionViewCell;



@interface HUCameraEventSpacerCell : UICollectionViewCell

@property (nonatomic) BOOL needsFullDashedLineWidth; // ivar: _needsFullDashedLineWidth
@property (nonatomic) BOOL spansMultipleDays; // ivar: _spansMultipleDays


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)updateWithRecordingEvent:(id)arg0 previousEvent:(id)arg1 spanningMultipleDays:(BOOL)arg2 ;


@end


#endif