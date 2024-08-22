// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFSUGGESTIONBANNERVIEW_H
#define MFSUGGESTIONBANNERVIEW_H

@class UIView<SGBannerProtocol>, NSArray;


#import "MFMessageHeaderViewBlock.h"

@interface MFSuggestionBannerView : MFMessageHeaderViewBlock

@property (retain, nonatomic) UIView<SGBannerProtocol> *banner; // ivar: _banner
@property (retain, nonatomic) NSArray *bannerConstraints; // ivar: _bannerConstraints


-(id)_constraintsForEdges:(NSUInteger)arg0 banner:(id)arg1 useLayoutMarginsGuide:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 banner:(id)arg1 ;
-(void)commonInitWithBanner:(id)arg0 ;
-(void)setSeparatorDrawsFlushWithLeadingEdge:(BOOL)arg0 ;
-(void)setSeparatorDrawsFlushWithTrailingEdge:(BOOL)arg0 ;
-(void)updateConstraints;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif