// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUINAVIGATIONCONTROLLER_H
#define VUINAVIGATIONCONTROLLER_H

@class NSString, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate;


#import "VUIAppNavigationController.h"
#import "VUIDocumentUIConfiguration.h"

@interface VUINavigationController : VUIAppNavigationController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate>



@property (retain, nonatomic) VUIDocumentUIConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *gesture; // ivar: _gesture
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif