// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNCUSTOMACTIONSHEETPRESENTATION_H
#define _CNCUSTOMACTIONSHEETPRESENTATION_H

@class NSString, UIView, UIViewController;
@protocol UIActionSheetPresentationControllerDelegate, UIViewControllerTransitioningDelegate, CNCustomPresentation;

#import <Foundation/Foundation.h>


@interface _CNCustomActionSheetPresentation : NSObject <UIActionSheetPresentationControllerDelegate, UIViewControllerTransitioningDelegate, CNCustomPresentation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger permittedArrowDirections; // ivar: _permittedArrowDirections
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(id)presentedViewController;
-(void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg0 ;
-(void)prepareForPresentationOfController:(id)arg0 ;


@end


#endif