// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOBAKEDTHUMBNAILS_H
#define PLPHOTOBAKEDTHUMBNAILS_H

@class NSData, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLPhotoBakedThumbnails : NSObject {
    unsigned short _format;
    int _singleThumbnailImageLength;
    NSUInteger _count;
    BOOL _dataIsMutable;
    NSData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
    NSMutableDictionary *_options;
    NSData *_optionsData;
    BOOL _optionsAccessed;
    BOOL _missingHeader;
    CGSize _size;
}


@property (readonly, nonatomic) unsigned int bitmapInfo;
@property (readonly, nonatomic) int bitsPerComponent;
@property (readonly, nonatomic) int bytesPerPixel;
@property (readonly, nonatomic) unsigned short format;
@property (readonly, nonatomic) CGRect imageRect;
@property (readonly, nonatomic) NSMutableDictionary *options;
@property (readonly, nonatomic) NSData *optionsData;
@property (readonly, nonatomic) CGSize size;


+(BOOL)_transformForImage:(struct CGImage *)arg0 isCropped:(BOOL)arg1 captureOrientation:(int)arg2 sizeInOut:(struct CGSize *)arg3 contextSizeOut:(struct CGSize *)arg4 transformOut:(struct CGAffineTransform *)arg5 ;
+(id)thumbnailsWithContentsOfFile:(id)arg0 format:(unsigned short)arg1 ;
-(BOOL)saveToFile:(id)arg0 ;
-(BOOL)writeBorderedThumbnailOfImage:(struct CGImage *)arg0 toBuffer:(*void)arg1 orientation:(*int)arg2 format:(unsigned short)arg3 formatInfo:(struct ? *)arg4 delegate:(id)arg5 ;
-(NSUInteger)count;
-(char *)thumbnailBytesAtIndex:(NSInteger)arg0 ;
-(id)_thumbnailData;
-(id)description;
-(id)initWithContentsOfFile:(id)arg0 format:(unsigned short)arg1 readOnly:(BOOL)arg2 ;
-(id)initWithData:(id)arg0 format:(unsigned short)arg1 readOnly:(BOOL)arg2 ;
-(id)initWithImages:(id)arg0 format:(unsigned short)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(id)serializedData;
-(id)thumbnailDataAtIndex:(NSInteger)arg0 ;
-(struct CGImage *)thumbnailImageAtIndex:(NSInteger)arg0 ;


@end


#endif