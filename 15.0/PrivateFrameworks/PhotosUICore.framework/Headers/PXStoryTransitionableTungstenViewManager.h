// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYTRANSITIONABLETUNGSTENVIEWMANAGER_H
#define PXSTORYTRANSITIONABLETUNGSTENVIEWMANAGER_H

@class UIColor, UIView;
@protocol PXStoryTungstenViewConfiguration;

#import <Foundation/Foundation.h>

#import "PXGLayout.h"
#import "PXMediaProvider.h"
#import "PXStoryTransitionLayout.h"
#import "PXGView.h"

@interface PXStoryTransitionableTungstenViewManager : NSObject <PXStoryTungstenViewConfiguration>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) PXGLayout *contentLayout; // ivar: _contentLayout
@property (nonatomic) UIEdgeInsets insets; // ivar: _insets
@property (nonatomic) BOOL isPreparedForTransition; // ivar: _isPreparedForTransition
@property (retain, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) BOOL shouldEmbedContentLayout; // ivar: _shouldEmbedContentLayout
@property (nonatomic) BOOL showsHorizontalScrollIndicator; // ivar: _showsHorizontalScrollIndicator
@property (nonatomic) BOOL showsVerticalScrollIndicator; // ivar: _showsVerticalScrollIndicator
@property (readonly, nonatomic) PXStoryTransitionLayout *transitionLayout; // ivar: _transitionLayout
@property (readonly, nonatomic) PXGView *tungstenView; // ivar: _tungstenView


+(id)tungstenViewManagerInContainerViewController:(id)arg0 ;
-(id)init;
-(id)initWithContentLayout:(id)arg0 containerView:(id)arg1 containerViewController:(id)arg2 configuration:(id)arg3 ;
-(void)prepareForTransitionInContainerView:(id)arg0 withContentFrame:(struct CGRect )arg1 ;
-(void)restoreAfterTransition;


@end


#endif