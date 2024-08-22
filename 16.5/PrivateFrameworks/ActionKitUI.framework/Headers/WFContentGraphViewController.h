// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTENTGRAPHVIEWCONTROLLER_H
#define WFCONTENTGRAPHVIEWCONTROLLER_H

@class UIViewController, WFContentItem;


#import "CKForceLayoutAnimator.h"
#import "WFContentCoercionNodeView.h"

@interface WFContentGraphViewController : UIViewController

@property (retain, nonatomic) CKForceLayoutAnimator *animator; // ivar: _animator
@property (nonatomic) BOOL coercing; // ivar: _coercing
@property (readonly, nonatomic) WFContentItem *contentItem; // ivar: _contentItem
@property (retain, nonatomic) WFContentCoercionNodeView *rootNodeView; // ivar: _rootNodeView


-(BOOL)useSmallBubbles;
-(id)initWithContentItem:(id)arg0 ;
-(void)done;
-(void)loadView;
-(void)panNode:(id)arg0 ;
-(void)tapNode:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif