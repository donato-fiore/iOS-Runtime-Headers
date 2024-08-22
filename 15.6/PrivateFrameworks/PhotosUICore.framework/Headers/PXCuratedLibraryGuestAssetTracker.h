// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYGUESTASSETTRACKER_H
#define PXCURATEDLIBRARYGUESTASSETTRACKER_H

@class NSString;
@protocol PXChangeObserver, PXCuratedLibraryGuestAssetTrackerDelegate;

#import <Foundation/Foundation.h>

#import "PXCuratedLibraryViewModel.h"
#import "PXCuratedLibraryLayout.h"

@interface PXCuratedLibraryGuestAssetTracker : NSObject <PXChangeObserver>

 {
    NSUInteger _numberOfGuestAssetsVisible;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryLayout *_layout;
}


@property (readonly, nonatomic) BOOL canDisplayGuestAssets; // ivar: _canDisplayGuestAssets
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCuratedLibraryGuestAssetTrackerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) BOOL isDisplayingGuestAssets; // ivar: _isDisplayingGuestAssets
@property (readonly) Class superclass;


-(BOOL)_checkForGuestAssetsVisible;
-(BOOL)_isViewSettled;
-(id)initWithViewModel:(id)arg0 layout:(id)arg1 ;
-(void)_checkForVisibilityUpdates;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif