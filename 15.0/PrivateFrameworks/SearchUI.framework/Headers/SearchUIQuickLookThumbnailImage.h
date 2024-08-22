// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIQUICKLOOKTHUMBNAILIMAGE_H
#define SEARCHUIQUICKLOOKTHUMBNAILIMAGE_H

@class FPItemID, QLThumbnailGenerationRequest, NSURL;


#import "SearchUIImage.h"

@interface SearchUIQuickLookThumbnailImage : SearchUIImage

@property (retain, nonatomic) FPItemID *fpItemID; // ivar: _fpItemID
@property BOOL isCompact; // ivar: _isCompact
@property (weak) QLThumbnailGenerationRequest *request; // ivar: _request
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)initWithResult:(id)arg0 url:(id)arg1 isCompact:(BOOL)arg2 ;
-(id)initWithSFImage:(id)arg0 ;
-(void)dealloc;
-(void)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)updateSize;


@end


#endif