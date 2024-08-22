// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSCROLLVIEWSTRESSER_H
#define PXSCROLLVIEWSTRESSER_H

@class CADisplayLink, UIScrollView;

#import <Foundation/Foundation.h>


@interface PXScrollViewStresser : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) NSInteger scrollCount; // ivar: _scrollCount
@property (nonatomic) unsigned int scrollDirection; // ivar: _scrollDirection
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;


+(id)sharedInstance;
-(void)_handleDisplayLink:(id)arg0 ;
-(void)startScrollingScrollView:(id)arg0 axis:(NSInteger)arg1 ;
-(void)stopScrolling;


@end


#endif