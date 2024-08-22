// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXSCROLLVIEW_H
#define SXSCROLLVIEW_H

@class TSDScrollView, NSString;
@protocol SXAXElementOccluder, SXScrollViewDelegate;


#import "SXAXCustomRotorProvider.h"

@interface SXScrollView : TSDScrollView <SXAXElementOccluder>



@property (retain, nonatomic) SXAXCustomRotorProvider *customRotorProvider; // ivar: _customRotorProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBouncing;
@property (weak, nonatomic) NSObject<SXScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (readonly) Class superclass;


-(BOOL)_accessibilityScrollingEnabled;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldOccludeAccessibilityElement:(id)arg0 ;
-(id)accessibilityCustomRotors;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif