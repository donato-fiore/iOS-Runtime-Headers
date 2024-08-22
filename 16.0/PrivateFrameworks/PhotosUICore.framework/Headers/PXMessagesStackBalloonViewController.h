// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMESSAGESSTACKBALLOONVIEWCONTROLLER_H
#define PXMESSAGESSTACKBALLOONVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PXMessagesStackViewDelegate;


#import "PXMessagesStackView.h"
#import "PXAssetActionManager.h"
#import "PXAssetsDataSourceManager.h"
#import "PXUIMediaProvider.h"

@interface PXMessagesStackBalloonViewController : UIViewController <PXMessagesStackViewDelegate>

 {
    PXMessagesStackView *_stackView;
    BOOL _allowAutoplay;
    BOOL _hasTransitionSnapshot;
}


@property (retain, nonatomic) PXAssetActionManager *assetActionManager; // ivar: _assetActionManager
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly) Class superclass;


-(BOOL)stackView:(id)arg0 shouldAutoplayAsset:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataSourceManager:(id)arg0 mediaProvider:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_executeReuseTest;
-(void)_executeScroll;
-(void)_presentGridWithAssetReference:(id)arg0 ;
-(void)_toggleAdditionalItems;
-(void)_toggleAutoplay;
-(void)_togglePlayableLoading;
-(void)_toggleSnapshot;
-(void)stackView:(id)arg0 didSelectAssetReference:(id)arg1 ;
-(void)stackViewDidSelectAdditionalItemsCard:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif