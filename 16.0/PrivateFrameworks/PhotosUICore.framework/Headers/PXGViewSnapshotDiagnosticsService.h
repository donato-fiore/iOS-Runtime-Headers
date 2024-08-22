// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGVIEWSNAPSHOTDIAGNOSTICSSERVICE_H
#define PXGVIEWSNAPSHOTDIAGNOSTICSSERVICE_H

@class NSString, NSMutableArray, UIViewController;
@protocol UIDocumentInteractionControllerDelegate;


#import "PXDiagnosticsService.h"
#import "PXCuratedLibraryAssetsDataSourceManager.h"
#import "PXGView.h"

@interface PXGViewSnapshotDiagnosticsService : PXDiagnosticsService <UIDocumentInteractionControllerDelegate>



@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXGView *gridView; // ivar: _gridView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *imageURLs; // ivar: _imageURLs
@property (retain, nonatomic) NSMutableArray *images; // ivar: _images
@property (nonatomic) CGRect lastScrollViewBounds; // ivar: _lastScrollViewBounds
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


+(id)_createPDFWithImagesAtURLs:(id)arg0 ;
+(id)_cropRect:(struct CGRect )arg0 fromImage:(id)arg1 ;
+(id)_imageAtURL:(id)arg0 ;
+(id)_mergeImagesFromArray:(id)arg0 ;
+(id)_snapshotImageFromView:(id)arg0 ;
+(id)_writeImageToDisk:(id)arg0 suffix:(id)arg1 ;
-(BOOL)canPerformAction;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg0 ;
-(id)initWithItemProviders:(id)arg0 ;
-(id)title;
-(void)_captureNextPage;
-(void)_mergeAllImagesAndWriteToDisk;
-(void)_stopCapture;
-(void)performAction;


@end


#endif