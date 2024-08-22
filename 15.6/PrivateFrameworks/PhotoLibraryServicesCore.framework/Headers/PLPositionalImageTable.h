// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPOSITIONALIMAGETABLE_H
#define PLPOSITIONALIMAGETABLE_H

@class NSString;
@protocol PLThumbPersistenceManager;


#import "PLPositionalTable.h"
#import "PLImageFormat.h"

@interface PLPositionalImageTable : PLPositionalTable <PLThumbPersistenceManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PLImageFormat *format; // ivar: _format
@property (readonly, nonatomic) NSUInteger formatBytesPerPixel; // ivar: _formatBytesPerPixel
@property (nonatomic) BOOL formatIsCropped; // ivar: _formatIsCropped
@property (readonly, nonatomic) NSUInteger formatMaxBytesPerRow; // ivar: _formatMaxBytesPerRow
@property (nonatomic) int formatSideLen; // ivar: _formatSideLen
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) NSString *path;
@property (readonly) Class superclass;


+(NSUInteger)metalPixelFormat;
+(struct __CFString *)colorSpaceName;
-(?)readImageDataAtIndex:(?)arg0 intoPoolNode:(?)arg1 bytesRead:(?)arg2 imageWidth:(?)arg3 imageHeight:(?)arg4 imageDataWidth:(?)arg5 imageDataHeight:(?)arg6 startingOffset:(?)arg7 bytesPerRowuuidBytes;
-(BOOL)usesThumbIdentifiers;
-(BOOL)validateData:(id)arg0 withToken:(id)arg1 ;
-(BOOL)writeDebugImageAtIndex:(NSUInteger)arg0 toFileURL:(id)arg1 ;
-(Class)entriesClass;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg0 ;
-(id)debugImageDataAtIndex:(NSUInteger)arg0 ;
-(id)imageDataWithIdentifier:(id)arg0 orIndex:(NSUInteger)arg1 width:(*int)arg2 height:(*int)arg3 bytesPerRow:(*int)arg4 dataWidth:(*int)arg5 dataHeight:(*int)arg6 dataOffset:(*int)arg7 ;
-(id)initWithPath:(id)arg0 readOnly:(BOOL)arg1 format:(id)arg2 ;
-(id)readImageEntriesAtIndexes:(id)arg0 ;
-(struct CGImage *)createImageWithIdentifier:(id)arg0 orIndex:(NSUInteger)arg1 ;
-(struct PLImageTableEntryFooter_s *)tableFooterForIndex:(NSUInteger)arg0 ;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg0 withToken:(id)arg1 ;
-(void)getImageDataOffset:(*NSInteger)arg0 size:(struct CGSize *)arg1 bytesPerRow:(*NSUInteger)arg2 fromEntryFooter:(struct PLImageTableEntryFooter_s *)arg3 ;
-(void)preheatDataForThumbnailIndexes:(id)arg0 ;


@end


#endif