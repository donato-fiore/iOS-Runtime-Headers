// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVMLVIEWFACTORY_H
#define TVMLVIEWFACTORY_H


#import <Foundation/Foundation.h>


@interface TVMLViewFactory : NSObject



+(id)_organizerViewWithElement:(id)arg0 elements:(id)arg1 existingView:(id)arg2 ;
+(id)buttonForElement:(id)arg0 existingView:(id)arg1 ;
+(id)buttonLockupForElement:(id)arg0 existingView:(id)arg1 ;
+(id)imageStackViewWithElement:(id)arg0 existingView:(id)arg1 ;
+(id)imageStackViewWithElement:(id)arg0 layout:(id)arg1 existingView:(id)arg2 ;
+(id)imageViewWithElement:(id)arg0 existingView:(id)arg1 ;
+(id)imageViewWithElement:(id)arg0 layout:(id)arg1 existingView:(id)arg2 ;
+(id)organizerViewWithElements:(id)arg0 existingView:(id)arg1 ;
-(id)_activityIndicatorViewForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_buttonForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_buttonLockupForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_cardViewFromElement:(id)arg0 existingView:(id)arg1 ;
-(id)_headerColumnViewForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_imageViewForBadgeElement:(id)arg0 existingView:(id)arg1 ;
-(id)_imageViewForElement:(id)arg0 layout:(id)arg1 existingView:(id)arg2 ;
-(id)_labelViewForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_listItemLockupWithElement:(id)arg0 existingView:(id)arg1 ;
-(id)_loadingImageViewForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_monogramViewForElement:(id)arg0 layout:(id)arg1 existingView:(id)arg2 ;
-(id)_organizerViewForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_progressBarFromElement:(id)arg0 existingView:(id)arg1 ;
-(id)_ratingBadgeFromElement:(id)arg0 existingView:(id)arg1 ;
-(id)_rowViewForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_seasonsBadgeWithElement:(id)arg0 existingView:(id)arg1 ;
-(id)_segmentedControlForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_separatorViewForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_textBoxViewForElement:(id)arg0 existingView:(id)arg1 ;
-(id)_textViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(id)_zoomableTextViewFromElement:(id)arg0 alwaysFocusable:(BOOL)arg1 existingView:(id)arg2 ;
-(id)init;
-(void)_registerViewCreators;


@end


#endif