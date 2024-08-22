// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SIRIUINAVIGATIONCONTROLLERDELEGATEADAPTER_H
#define _SIRIUINAVIGATIONCONTROLLERDELEGATEADAPTER_H

@class NSString;
@protocol UINavigationControllerDelegate, SiriUINavigationTransitioning;

#import <Foundation/Foundation.h>


@interface _SiriUINavigationControllerDelegateAdapter : NSObject <UINavigationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<UINavigationControllerDelegate> *externalDelegate; // ivar: _externalDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SiriUINavigationTransitioning> *transitionController; // ivar: _transitionController


-(NSInteger)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg0 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)navigationController:(id)arg0 interactionControllerForAnimationController:(id)arg1 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif