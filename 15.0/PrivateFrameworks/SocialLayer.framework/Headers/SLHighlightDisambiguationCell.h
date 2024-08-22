// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLHIGHLIGHTDISAMBIGUATIONCELL_H
#define SLHIGHLIGHTDISAMBIGUATIONCELL_H

@class UICollectionViewCell;


#import "SLAttribution.h"
#import "SLHighlightDisambiguationPillView.h"

@interface SLHighlightDisambiguationCell : UICollectionViewCell

@property (readonly, nonatomic) SLAttribution *attribution; // ivar: _attribution
@property (retain, nonatomic) SLHighlightDisambiguationPillView *expandedAttributionView; // ivar: _expandedAttributionView


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateWithAttribution:(id)arg0 ;


@end


#endif