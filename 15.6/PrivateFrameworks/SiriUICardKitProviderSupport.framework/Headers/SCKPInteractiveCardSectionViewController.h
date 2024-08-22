// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCKPINTERACTIVECARDSECTIONVIEWCONTROLLER_H
#define SCKPINTERACTIVECARDSECTIONVIEWCONTROLLER_H

@class CRKCardSectionViewController, CRKContainerCardSectionView;



@interface SCKPInteractiveCardSectionViewController : CRKCardSectionViewController

@property (retain, nonatomic) CRKContainerCardSectionView *view;


+(id)cardSectionClasses;
-(BOOL)_shouldRenderButtonOverlay;
-(void)_loadCardSectionView;


@end


#endif