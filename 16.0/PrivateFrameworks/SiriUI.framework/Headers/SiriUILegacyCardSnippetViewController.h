// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUILEGACYCARDSNIPPETVIEWCONTROLLER_H
#define SIRIUILEGACYCARDSNIPPETVIEWCONTROLLER_H

@class SAUISnippet, NSString;
@protocol SiriUISizeClassConfiguring;


#import "SiriUICardSnippetViewController.h"

@interface SiriUILegacyCardSnippetViewController : SiriUICardSnippetViewController <SiriUISizeClassConfiguring>

 {
    SAUISnippet *_snippet;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)cardViewController:(id)arg0 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isConfirmed;
-(BOOL)isFullPadWidth;
-(BOOL)removedAfterDialogProgresses;
-(BOOL)usePlatterStyle;
-(BOOL)wantsConfirmationInsets;
-(BOOL)wantsToManageBackgroundColor;
-(Class)transparentHeaderViewClass;
-(id)_backingSnippetViewController;
-(id)_legacyCardSectionViewController;
-(id)attributedSubtitle;
-(id)headerPunchOut;
-(id)initWithSnippet:(id)arg0 ;
-(id)navigationTitle;
-(id)requestContext;
-(id)sashItem;
-(id)snippet;
-(id)snippetPunchOut;
-(id)subtitle;
-(void)_setVirgin:(BOOL)arg0 ;
-(void)cardViewControllerDidLoad:(id)arg0 ;
-(void)configureContentWithSizeClass:(NSInteger)arg0 ;
-(void)endEditingAndCorrect:(BOOL)arg0 ;
-(void)setAttributedSubtitle:(id)arg0 ;
-(void)setCancelled:(BOOL)arg0 ;
-(void)setConfirmed:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setHeaderPunchOut:(id)arg0 ;
-(void)setIsFullPadWidth:(BOOL)arg0 ;
-(void)setNavigationTitle:(id)arg0 ;
-(void)setRequestContext:(id)arg0 ;
-(void)setSnippet:(id)arg0 ;
-(void)setSnippetPunchOut:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setWantsConfirmationInsets:(BOOL)arg0 ;
-(void)siriDidDeactivate;
-(void)siriDidLayoutSnippetView;
-(void)siriWillLayoutSnippetView;
-(void)wasAddedToTranscript;
-(void)willCancel;
-(void)willConfirm;


@end


#endif