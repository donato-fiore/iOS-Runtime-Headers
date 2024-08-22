// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUILEGACYSTOCKSCHARTCARDSECTIONVIEWCONTROLLER_H
#define SIRIUILEGACYSTOCKSCHARTCARDSECTIONVIEWCONTROLLER_H

@class CRKCardSectionViewController;


#import "SiriUISnippetViewController.h"
#import "SiriUICardSectionView.h"

@interface SiriUILegacyStocksChartCardSectionViewController : CRKCardSectionViewController {
    SiriUISnippetViewController *_snippetViewController;
}


@property (retain, nonatomic) SiriUICardSectionView *view;


+(id)cardSectionClasses;
-(BOOL)_shouldRenderButtonOverlay;
-(void)_loadCardSectionView;
-(void)_updateContentSize;


@end


#endif