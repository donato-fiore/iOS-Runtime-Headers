// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSDNDBEDTIMEGREETINGVIEWCONTROLLER_H
#define CSDNDBEDTIMEGREETINGVIEWCONTROLLER_H

@class UIColor, CLInUseAssertion, NSString;
@protocol CSModalViewDelegate, CSDNDBedtimeGreetingDelegate;


#import "CSModalViewControllerBase.h"

@interface CSDNDBedtimeGreetingViewController : CSModalViewControllerBase <CSModalViewDelegate>

 {
    UIColor *_legibilityPrimaryColor;
    CLInUseAssertion *_weatherInUseAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSDNDBedtimeGreetingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)_greetingString;
-(id)initWithLegibilityPrimaryColor:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)dealloc;
-(void)handleSecondaryActionForView:(id)arg0 ;
-(void)loadView;


@end


#endif