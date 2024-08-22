// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUVIEWSERVICEENDPOINTTABLEVIEWCELL_H
#define MRUVIEWSERVICEENDPOINTTABLEVIEWCELL_H

@class UITableViewCell, NSString, UIView;
@protocol MRUVisualStylingProviderObserver, UIPointerInteractionDelegate;


#import "MRUNowPlayingHeaderView.h"
#import "MRUVisualStylingProvider.h"

@interface MRUViewServiceEndpointTableViewCell : UITableViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate>



@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MRUNowPlayingHeaderView *headerView; // ivar: _headerView
@property (readonly, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif