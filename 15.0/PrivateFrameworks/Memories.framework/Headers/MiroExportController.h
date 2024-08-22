// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROEXPORTCONTROLLER_H
#define MIROEXPORTCONTROLLER_H

@class UIImage, NSDictionary;


#import "ReaderWriterExportController.h"
#import "PMTitleSubtitleView.h"

@interface MiroExportController : ReaderWriterExportController

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) UIImage *posterImage; // ivar: _posterImage
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) NSDictionary *titleInformation; // ivar: _titleInformation
@property (retain, nonatomic) PMTitleSubtitleView *titleView; // ivar: _titleView


-(id)_compositionForExport;
-(id)thumbnailImage;
-(id)titleLayerForVideoComposition:(id)arg0 ;
-(struct CGSize )exportSize;
-(void)_setupMovieController;
-(void)createMovieController;


@end


#endif