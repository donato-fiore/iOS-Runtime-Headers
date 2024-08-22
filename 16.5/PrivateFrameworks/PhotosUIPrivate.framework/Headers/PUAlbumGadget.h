// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUALBUMGADGET_H
#define PUALBUMGADGET_H

@class NSString, PXAssetCollectionActionManager, PHCollection, PXGadgetSpec, NSIndexSet;
@protocol PXDiagnosticsEnvironment, PXGadget, PUAlbumGadgetDelegate, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PUAlbumListCellContentView.h"
#import "PUAlbumListCellContentViewHelper.h"

@interface PUAlbumGadget : NSObject <PXDiagnosticsEnvironment, PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) PXAssetCollectionActionManager *actionManager; // ivar: _actionManager
@property (weak, nonatomic) NSObject<PUAlbumGadgetDelegate> *albumGadgetDelegate; // ivar: _albumGadgetDelegate
@property (readonly, nonatomic) PUAlbumListCellContentView *albumListCellContentView; // ivar: _albumListCellContentView
@property (readonly, nonatomic) PUAlbumListCellContentViewHelper *albumListCellContentViewHelper;
@property (retain, nonatomic) PHCollection *collection; // ivar: _collection
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic, getter=isContentViewVisible) BOOL contentViewVisible; // ivar: _contentViewVisible
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (copy, nonatomic) NSIndexSet *indexesOfHiddenStackItems; // ivar: _indexesOfHiddenStackItems
@property (nonatomic) CGFloat lastPreferredHeight; // ivar: _lastPreferredHeight
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (nonatomic) NSInteger priority;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


-(NSInteger)estimatedIndexInCollection:(id)arg0 ofAssetForStackItemAtIndex:(NSInteger)arg1 ;
-(id)contentView;
-(id)contextMenuWithSuggestedActions:(id)arg0 ;
-(id)init;
-(id)initWithCollection:(id)arg0 albumGadgetDelegate:(id)arg1 ;
-(id)previewViewControllerAtLocation:(struct CGPoint )arg0 fromSourceView:(id)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)targetPreviewViewForLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGRect )rectForStackItemAtIndex:(NSInteger)arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateContent;
-(void)contentViewDidDisappear;
-(void)contentViewWillAppear;
-(void)reconfigure;


@end


#endif