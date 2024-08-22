// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMOMENTSHARESTATUS_H
#define PXMOMENTSHARESTATUS_H

@class NSString;
@protocol PXPhotoLibraryUIChangeObserver, PXMutableMomentShareStatus, PXDisplayAssetFetchResult, PXDisplayMomentShare, PXSectionedFetchResult;


#import "PXObservable.h"
#import "PXCPLUIStatusProvider.h"

@interface PXMomentShareStatus : PXObservable <PXPhotoLibraryUIChangeObserver, PXMutableMomentShareStatus>

 {
    PXCPLUIStatusProvider *_statusProvider;
}


@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *allAssetsFetchResult; // ivar: _allAssetsFetchResult
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *copiedAssetsFetchResult; // ivar: _copiedAssetsFetchResult
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *copyingAssetsFetchResult; // ivar: _copyingAssetsFetchResult
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXDisplayMomentShare> *momentShare; // ivar: _momentShare
@property (readonly, nonatomic) NSObject<PXSectionedFetchResult> *participantsFetchResult; // ivar: _participantsFetchResult
@property (readonly, nonatomic) PXCPLUIStatusProvider *statusProvider;
@property (readonly) Class superclass;


+(id)new;
-(id)_actionManager;
-(id)init;
-(id)initWithMomentShare:(id)arg0 ;
-(id)owner;
-(void)performChanges:(id)arg0 ;


@end


#endif