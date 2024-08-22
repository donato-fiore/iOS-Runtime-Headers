// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPOPOVERPRESENTATIONDELEGATE_H
#define _SFPOPOVERPRESENTATIONDELEGATE_H

@class UIPopoverPresentationController, NSString;
@protocol UIPopoverPresentationControllerDelegate, _SFPopoverSourceInfo;

#import <Foundation/Foundation.h>


@interface _SFPopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate>

 {
    id<_SFPopoverSourceInfo> *_sourceInfo;
    UIPopoverPresentationController *_popoverPresentationController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL popoverUsesAdaptivePresentationInCompact; // ivar: _popoverUsesAdaptivePresentationInCompact
@property (readonly) Class superclass;


+(void)attachDelegateToPopoverPresentationController:(id)arg0 anchoredToReloadButtonInNavigationBar:(id)arg1 ;
+(void)attachDelegateToPopoverPresentationController:(id)arg0 anchoredToURLOutlineInNavigationBar:(id)arg1 ;
+(void)attachDelegateToPopoverPresentationController:(id)arg0 anchoredToURLOutlineInNavigationBar:(id)arg1 usesAdaptivePresentationInCompact:(BOOL)arg2 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithSourceInfo:(id)arg0 ;
-(id)presentationController:(id)arg0 viewControllerForAdaptivePresentationStyle:(NSInteger)arg1 ;
-(void)attachToPopoverPresentationController:(id)arg0 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)updatePopoverPosition;


@end


#endif