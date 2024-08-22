// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLICATIONMESSAGEVIEW_H
#define PKAPPLICATIONMESSAGEVIEW_H

@class UIControl, PKApplicationMessageNode, PKApplicationMessage, NSMutableArray, CAFilter, NSString, PKPaymentService;
@protocol PKApplicationMessageContentViewDelegate, PKPGSVSectionSubheaderView, PKPGSVSectionSubheaderDelegate, PKApplicationMessageViewDelegate;


#import "PKApplicationMessageView.h"
#import "PKApplicationMessageContentView.h"

@interface PKApplicationMessageView : UIControl <PKApplicationMessageContentViewDelegate, PKPGSVSectionSubheaderView>

 {
    PKApplicationMessageView *_parent;
    BOOL _visited;
    PKApplicationMessageNode *_content;
    PKApplicationMessage *_message;
    BOOL _inTreeLayout;
    ? _treeLayoutState;
    NSMutableArray *_stagedRemovedSubviews;
    CGFloat _messageViewHeightRestriction;
    BOOL _layoutStateDirty;
    CGRect _layoutStateBounds;
    ? _layoutState;
    BOOL _messageViewPresented;
    int _messageViewPresentationLayoutMode;
    CGSize _messageViewSize;
    BOOL _invalidated;
    int _layoutMode;
    NSUInteger _depth;
    BOOL _reloadQueued;
    BOOL _reloadQueuedIsRoot;
    PKApplicationMessageContentView *_messageView;
    NSMutableArray *_children;
    NSMutableArray *_removedSubviews;
    NSMutableArray *_removedVisualSubviews;
    BOOL _inLayout;
    CAFilter *_highlightFilter;
    *CGColor _filterColor;
    BOOL _enabled;
    BOOL _selected;
    BOOL _highlighted;
    id<PKPGSVSectionSubheaderDelegate> *_subheaderDelegate;
}


@property (readonly, nonatomic) PKApplicationMessageNode *content;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKApplicationMessageViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPaymentService *paymentService; // ivar: _paymentService
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) CGFloat width; // ivar: _width


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(BOOL)needsRemoval;
-(NSInteger)scrollType;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithType:(NSInteger)arg0 width:(CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_tapped:(id)arg0 ;
-(void)applicationMessageContentViewDismissTapped:(id)arg0 ;
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