// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERSHUFFLERESOURCEEXPORTOPERATION_H
#define PUWALLPAPERSHUFFLERESOURCEEXPORTOPERATION_H

@class PXAsyncOperation, PFPosterEditConfiguration, NSError, NSURL, PIParallaxStyle, PFPosterMedia;
@protocol PISegmentationLoading, PISegmentationItem;



@interface PUWallpaperShuffleResourceExportOperation : PXAsyncOperation

@property (copy, nonatomic) PFPosterEditConfiguration *editConfiguration; // ivar: _editConfiguration
@property (retain) NSError *error; // ivar: _error
@property (retain, nonatomic) NSURL *exportDirectory; // ivar: _exportDirectory
@property (retain) NSObject<PISegmentationLoading> *exportTask; // ivar: _exportTask
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) PIParallaxStyle *persistedStyle; // ivar: _persistedStyle
@property (copy, nonatomic) PFPosterMedia *posterMedia; // ivar: _posterMedia
@property (retain, nonatomic) NSObject<PISegmentationItem> *segmentationItem; // ivar: _segmentationItem
@property (retain, nonatomic) NSURL *sourceDirectory; // ivar: _sourceDirectory
@property (retain, nonatomic) PIParallaxStyle *style; // ivar: _style


-(BOOL)_canExportFromDirectory;
-(BOOL)_exportFromDirectory;
-(BOOL)_tryExportFromDirectory;
-(BOOL)px_shouldWaitForCancel;
-(void)_handleExportCompletion:(id)arg0 ;
-(void)cancel;
-(void)px_finishIfPossible;
-(void)px_start;


@end


#endif