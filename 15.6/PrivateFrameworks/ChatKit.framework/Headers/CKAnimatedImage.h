// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKANIMATEDIMAGE_H
#define CKANIMATEDIMAGE_H

@class NSArray, UIImage;

#import <Foundation/Foundation.h>


@interface CKAnimatedImage : NSObject

@property (copy, nonatomic) NSArray *durations; // ivar: _durations
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) CGSize size;


// +(BOOL)_writeImagesWithDurations:(id)arg0 toCPBitmapURL:(id)arg1 imageProvider:(id)arg2 frameProcessor:(unk)arg3  ;
// +(BOOL)_writeImagesWithDurations:(id)arg0 toOutputStream:(id)arg1 imageProvider:(id)arg2 frameProcessor:(unk)arg3  ;
+(BOOL)writeImagesWithDurations:(id)arg0 toASTCURL:(id)arg1 imageProvider:(id)arg2 ;
// +(BOOL)writeImagesWithDurations:(id)arg0 toASTCURL:(id)arg1 imageProvider:(id)arg2 frameProcessor:(unk)arg3  ;
+(BOOL)writeImagesWithDurations:(id)arg0 toCPBitmapURL:(id)arg1 imageProvider:(id)arg2 ;
// +(BOOL)writeImagesWithDurations:(id)arg0 toCPBitmapURL:(id)arg1 imageProvider:(id)arg2 frameProcessor:(unk)arg3  ;
+(id)ASTCDataForImagesWithDurations:(id)arg0 imageProvider:(id)arg1 ;
+(id)animatedImageWithASTCData:(id)arg0 ;
+(id)animatedImageWithContentsOfASTCURL:(id)arg0 ;
+(id)animatedImageWithContentsOfCPBitmapURL:(id)arg0 ;
+(id)filenameExtension;
+(id)imageWithContentsOfCPBitmapURL:(id)arg0 ;
-(BOOL)writeToASTCURL:(id)arg0 ;
-(BOOL)writeToCPBitmapURL:(id)arg0 ;
-(id)_initWithImage:(id)arg0 durations:(id)arg1 ;
-(id)description;
-(id)frames;
-(id)initWithImages:(id)arg0 durations:(id)arg1 ;


@end


#endif