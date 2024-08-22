// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIPERSONHEADERCARDSECTIONVIEW_H
#define SEARCHUIPERSONHEADERCARDSECTIONVIEW_H

@class NSString, SFPersonHeaderCardSection;
@protocol CNGroupIdentityHeaderViewControllerDelegate;


#import "SearchUICardSectionView.h"
#import "SearchUIPersonHeaderBoxView.h"
#import "SearchUIPersonHeaderViewController.h"

@interface SearchUIPersonHeaderCardSectionView : SearchUICardSectionView <CNGroupIdentityHeaderViewControllerDelegate>



@property (retain) SearchUIPersonHeaderBoxView *boxView; // ivar: _boxView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) SFPersonHeaderCardSection *section;
@property (readonly) Class superclass;
@property (retain) SearchUIPersonHeaderViewController *viewController; // ivar: _viewController
@property (retain) SearchUIPersonHeaderViewController *viewControllerWithDowntimeButton; // ivar: _viewControllerWithDowntimeButton
@property (retain) SearchUIPersonHeaderViewController *viewControllerWithPayButton; // ivar: _viewControllerWithPayButton


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(id)contactWithFullName:(id)arg0 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg0 ;
-(id)contact;
-(id)embeddedViewController;
-(id)setupContentView;
-(struct UIEdgeInsets )layoutMargins;
-(void)groupIdentityHeaderViewController:(id)arg0 didPerformActionOfType:(id)arg1 fromDisambiguation:(BOOL)arg2 ;
-(void)groupIdentityHeaderViewController:(id)arg0 willPresentDisambiguationUIForActionType:(id)arg1 ;
-(void)sendCommandEngagementFeedbackWithType:(id)arg0 didSelectFromOptionsMenu:(BOOL)arg1 didDisplayHandleOptions:(BOOL)arg2 ;
-(void)updateWithContact:(id)arg0 person:(id)arg1 ;
-(void)updateWithPerson:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif