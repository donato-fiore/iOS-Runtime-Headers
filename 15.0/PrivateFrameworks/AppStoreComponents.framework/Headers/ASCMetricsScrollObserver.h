// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCMETRICSSCROLLOBSERVER_H
#define ASCMETRICSSCROLLOBSERVER_H

@class NSMutableSet, NSString, NSHashTable, UIScrollView;
@protocol _UIScrollViewScrollObserver;

#import <Foundation/Foundation.h>


@interface ASCMetricsScrollObserver : NSObject <_UIScrollViewScrollObserver>



@property (readonly, nonatomic) NSMutableSet *appearedModelIDs; // ivar: _appearedModelIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *renderedModelIDs; // ivar: _renderedModelIDs
@property (readonly, weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect visibleRect;


+(id)observerForScrollView:(id)arg0 ;
-(BOOL)hasModelAppeared:(id)arg0 ;
-(BOOL)hasModelRendered:(id)arg0 ;
-(BOOL)isDelegateAdded:(id)arg0 ;
-(id)initWithScrollView:(id)arg0 ;
-(struct CGPoint )centerOfView:(id)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)modelDidAppear:(id)arg0 ;
-(void)modelDidRender:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif