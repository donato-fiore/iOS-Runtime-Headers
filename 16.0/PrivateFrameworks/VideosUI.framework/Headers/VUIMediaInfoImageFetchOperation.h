// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMEDIAINFOIMAGEFETCHOPERATION_H
#define VUIMEDIAINFOIMAGEFETCHOPERATION_H

@class VUIAsynchronousOperation, NSMutableArray, NSError, VUIImage;


#import "VUIMediaInfo.h"

@interface VUIMediaInfoImageFetchOperation : VUIAsynchronousOperation

@property (retain, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) VUIImage *image; // ivar: _image
@property (nonatomic) BOOL imageLoadFinished; // ivar: _imageLoadFinished
@property (retain, nonatomic) VUIMediaInfo *mediaInfo; // ivar: _mediaInfo


-(id)initWithMediaInfo:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif