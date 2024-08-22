// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXBARSCONTROLLER_H
#define PXBARSCONTROLLER_H

@class NSMutableDictionary, NSArray, UIViewController;
@protocol PXActionPerformerDelegate, PXBarsControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXBarSpec.h"

@interface PXBarsController : NSObject {
    ? _needsUpdateFlags;
}


@property (weak, nonatomic) NSObject<PXActionPerformerDelegate> *actionPerformerDelegate; // ivar: _actionPerformerDelegate
@property (readonly, nonatomic) NSMutableDictionary *barButtonItemCache; // ivar: _barButtonItemCache
@property (readonly, nonatomic) NSMutableDictionary *barButtonItemCachedPlacement; // ivar: _barButtonItemCachedPlacement
@property (retain, nonatomic) PXBarSpec *barSpec; // ivar: _barSpec
@property (weak, nonatomic) NSObject<PXBarsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat fixedSpaceForEndButtonSpacing;
@property (readonly, nonatomic) CGFloat fixedSpaceForInterButtonSpacing;
@property (readonly, nonatomic) NSArray *leftBarButtonItemIdentifiers;
@property (readonly, nonatomic) NSArray *rightBarButtonItemIdentifiers;
@property (readonly, nonatomic) NSArray *toolbarItemIdentifiers;
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController
@property (nonatomic) BOOL wantsAnimatedBarsUpdate; // ivar: _wantsAnimatedBarsUpdate


-(BOOL)_needsUpdate;
-(id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)arg0 placement:(NSUInteger)arg1 ;
-(id)cachedBarButtonItemForIdentifier:(id)arg0 ;
-(id)createBarButtonItemForIdentifier:(id)arg0 placement:(NSUInteger)arg1 ;
-(id)init;
-(void)_updateBarsIfNeeded;
-(void)invalidateBarButtonItemWithIdentifier:(id)arg0 ;
-(void)invalidateBars;
-(void)purgeCachedBarButtonItemsForIdentifiers:(id)arg0 ;
-(void)updateBars;
-(void)updateIfNeeded;


@end


#endif