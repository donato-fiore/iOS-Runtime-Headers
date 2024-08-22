// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSCROLLVIEWKEYBOARDRESIZER_H
#define ICSCROLLVIEWKEYBOARDRESIZER_H

@class UIScrollView;
@protocol ICScrollViewKeyboardResizerDelegate;

#import <Foundation/Foundation.h>


@interface ICScrollViewKeyboardResizer : NSObject

@property (nonatomic, getter=isAutoResizing) BOOL autoResizing; // ivar: _autoResizing
@property (weak, nonatomic) NSObject<ICScrollViewKeyboardResizerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didResizeScrollView; // ivar: _didResizeScrollView
@property (nonatomic) BOOL fullyShowingKeyboard; // ivar: _fullyShowingKeyboard
@property (nonatomic, getter=isObservingKeyboardNotifications) BOOL observingKeyboardNotifications; // ivar: _observingKeyboardNotifications
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL showingKeyboard; // ivar: _showingKeyboard


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)applyInsetsFromKeyboardFrame:(struct CGRect )arg0 duration:(CGFloat)arg1 ;
-(void)clearInsetsWithDuration:(CGFloat)arg0 ;
-(void)dealloc;
-(void)handleKeyboardDidShow:(id)arg0 ;
-(void)handleKeyboardWillHide:(id)arg0 ;
-(void)handleKeyboardWillShow:(id)arg0 ;
-(void)reapplyInsets;
-(void)startAutoResizing;
-(void)stopAutoResizing;


@end


#endif