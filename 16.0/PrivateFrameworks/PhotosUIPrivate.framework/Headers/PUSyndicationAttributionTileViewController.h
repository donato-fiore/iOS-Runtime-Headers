// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSYNDICATIONATTRIBUTIONTILEVIEWCONTROLLER_H
#define PUSYNDICATIONATTRIBUTIONTILEVIEWCONTROLLER_H

@class SLAttributionView, NSString, SLHighlight, UIView;
@protocol SLAttributionViewDelegate, PUSyndicationAttributionTileViewControllerDelegate;


#import "PUTileViewController.h"
#import "PUAssetViewModel.h"

@interface PUSyndicationAttributionTileViewController : PUTileViewController <SLAttributionViewDelegate>



@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (retain, nonatomic) SLAttributionView *attributionView; // ivar: _attributionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUSyndicationAttributionTileViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SLHighlight *highlight; // ivar: _highlight
@property (nonatomic) CGFloat occupiedLeadingWidth; // ivar: _occupiedLeadingWidth
@property (readonly, nonatomic) UIView *pillView;
@property (readonly) Class superclass;


-(BOOL)wantsVisibleRectChanges;
-(id)contextMenuItemsForAttributionView:(id)arg0 ;
-(id)loadView;
-(void)_handleHighlight:(id)arg0 withAssetUUID:(id)arg1 ;
-(void)_invalidateAttributionView;
-(void)_setupAttributionView;
-(void)_updateAttributionView;
-(void)becomeReusable;
-(void)didChangeVisibleRect;


@end


#endif