// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMIROMOVIEPRESENTER_H
#define PXMIROMOVIEPRESENTER_H

@class NSString;
@protocol PXMovieProviderDelegate;


#import "PXMoviePresenter.h"
#import "PXMiroMovieProvider.h"

@interface PXMiroMoviePresenter : PXMoviePresenter <PXMovieProviderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXMiroMovieProvider *miroProvider; // ivar: _miroProvider
@property (readonly) Class superclass;


-(BOOL)presentMovieViewControllerForAssetCollection:(id)arg0 keyAsset:(id)arg1 referencePersons:(id)arg2 preferredTransitionType:(NSInteger)arg3 ;
-(NSInteger)_presentationTypeWithPreferredTransitionType:(NSInteger)arg0 ;
-(id)presentingViewControllerForMovieProvider:(id)arg0 ;
-(void)_enableViewControllerChromeForViewController:(id)arg0 ;


@end


#endif