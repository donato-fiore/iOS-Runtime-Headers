// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMOVIEPRESENTER_H
#define PXMOVIEPRESENTER_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface PXMoviePresenter : NSObject

@property (readonly, weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


+(id)moviePresenterWithPresentingViewController:(id)arg0 ;
-(BOOL)presentMovieViewControllerForAssetCollection:(id)arg0 keyAsset:(id)arg1 preferredTransitionType:(NSInteger)arg2 ;
-(id)init;
-(id)initWithPresentingViewController:(id)arg0 ;


@end


#endif