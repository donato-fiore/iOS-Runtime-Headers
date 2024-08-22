// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTUNAVAILABLEPLACEHOLDERMANAGER_H
#define PXCONTENTUNAVAILABLEPLACEHOLDERMANAGER_H

@class NSString, PHFetchResult;
@protocol PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver, PXContentUnavailablePlaceholderManagerDelegate;

#import <Foundation/Foundation.h>

#import "PXGadgetDataSourceManager.h"

@interface PXContentUnavailablePlaceholderManager : NSObject <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver>

 {
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) NSString *customMessage; // ivar: _customMessage
@property (readonly, nonatomic) NSString *customTitle; // ivar: _customTitle
@property (nonatomic, getter=isDataSourceEmpty) BOOL dataSourceEmpty; // ivar: _dataSourceEmpty
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXContentUnavailablePlaceholderManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXGadgetDataSourceManager *gadgetDataSourceManager; // ivar: _gadgetDataSourceManager
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLibraryEmpty) BOOL libraryEmpty; // ivar: _libraryEmpty
@property (readonly, nonatomic) NSString *placeholderButtonTitle;
@property (readonly, nonatomic) NSString *placeholderMessage;
@property (readonly, nonatomic) NSString *placeholderTitle;
@property (retain, nonatomic) PHFetchResult *singleAssetFetchResult; // ivar: _singleAssetFetchResult
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsPlaceholder;


-(id)init;
-(id)initWithGadgetDataSourceManager:(id)arg0 customTitle:(id)arg1 customMessage:(id)arg2 ;
-(void)_gadgetDataSourceDidChange;
-(void)_invalidate;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performPlaceholderButtonAction;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;


@end


#endif