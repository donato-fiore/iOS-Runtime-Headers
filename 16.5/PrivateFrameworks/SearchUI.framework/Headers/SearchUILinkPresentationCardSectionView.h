// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUILINKPRESENTATIONCARDSECTIONVIEW_H
#define SEARCHUILINKPRESENTATIONCARDSECTIONVIEW_H

@class UITapGestureRecognizer, LPLinkView, SFLinkPresentationCardSection;


#import "SearchUICardSectionView.h"

@interface SearchUILinkPresentationCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) UITapGestureRecognizer *linkPresentationTapped; // ivar: _linkPresentationTapped
@property (retain, nonatomic) LPLinkView *linkView; // ivar: _linkView
@property (retain, nonatomic) SFLinkPresentationCardSection *section;


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(id)fallbackMetadataWithURL:(id)arg0 ;
-(id)setupContentView;
-(void)_performCommand;
-(void)fetchMetadataFromMessagesWithURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif