// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGEVIEW_H
#define PKAPPLICATIONMESSAGEVIEW_H

@class UIControl, PKApplicationMessageNode, PKApplicationMessage, NSMutableArray, UIButton, CAFilter, NSString;
@protocol PKApplicationMessageContentViewDelegate, PKPGSVSectionSubheaderView, PKPGSVSectionSubheaderDelegate, PKApplicationMessageViewDelegate;


#import "PKApplicationMessageView.h"
#import "PKApplicationMessageContentView.h"
#import "PKApplicationMessageViewConfiguration.h"

@interface PKApplicationMessageView : UIControl <PKApplicationMessageContentViewDelegate, PKPGSVSectionSubheaderView>

 {
    PKApplicationMessageView *_parent;
    BOOL _visited;
    PKApplicationMessageNode *_content;
    PKApplicationMessage *_message;
    BOOL _inTreeLayout;
    ? _treeLayoutState;
    NSMutableArray *_stagedRemovedSubviews;
    BOOL _hasPrecedingMessageView;
    CGFloat _messageViewHeightRestriction;
    BOOL _layoutStateDirty;
    CGRect _layoutStateBounds;
    ? _layoutState;
    BOOL _dismissable;
    BOOL _messageViewPresented;
    int _messageViewPresentationLayoutMode;
    CGSize _messageViewSize;
    BOOL _invalidated;
    int _layoutMode;
    NSUInteger _depth;
    BOOL _reloadQueued;
    BOOL _reloadQueuedIsRoot;
    UIButton *_dismissButton;
    PKApplicationMessageContentView *_messageView;
    NSMutableArray *_children;
    NSMutableArray *_removedSubviews;
    NSMutableArray *_removedVisualSubviews;
    BOOL _inLayout;
    CAFilter *_blurFilter;
    CGFloat _filterRadius;
    CAFilter *_highlightFilter;
    *CGColor _filterColor;
    BOOL _enabled;
    BOOL _selected;
    BOOL _highlighted;
    id<PKPGSVSectionSubheaderDelegate> *_subheaderDelegate;
    NSInteger _type;
}


@property (readonly, nonatomic) PKApplicationMessageViewConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) PKApplicationMessageNode *content;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKApplicationMessageViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)needsRemoval;
-(NSInteger)scrollType;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_tapped:(id)arg0 ;
-(void)applicationMessageContentViewDismissTapped:(id)arg0 ;
-(void)collapse;
-(void)dealloc;
-(void)layoutIfNeededAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSectionsState:(struct ? )arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSubheaderDelegate:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif