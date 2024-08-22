// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSOBJECTINFODATASET_H
#define MSOBJECTINFODATASET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MSObjectInfoDataset : NSObject {
    unsigned short _objectFormat;
    unsigned short _protectionStatus;
    NSUInteger _objectCompressedSize;
    unsigned short _thumbFormat;
    unsigned int _thumbCompressedSize;
    unsigned int _thumbOffset;
    unsigned int _thumbPixWidth;
    unsigned int _thumbPixHeight;
    unsigned int _imagePixWidth;
    unsigned int _imagePixHeight;
    unsigned int _imageBitDepth;
    unsigned int _parentObject;
    unsigned short _associationType;
    unsigned int _objectHandle;
    unsigned short _imageOrientation;
    NSUInteger _captureDate_tvsec;
    NSUInteger _modificationDate_tvsec;
    NSString *_filename;
}




-(NSUInteger)captureDate_tvsec;
-(NSUInteger)modificationDate_tvsec;
-(NSUInteger)objectCompressedSize;
-(id)content;
-(id)filename;
-(id)init;
-(id)initWithBytes:(char *)arg0 length:(unsigned int)arg1 ;
-(id)initWithData:(id)arg0 ;
-(unsigned int)imageBitDepth;
-(unsigned int)imagePixHeight;
-(unsigned int)imagePixWidth;
-(unsigned int)objectHandle;
-(unsigned int)parentObject;
-(unsigned int)thumbCompressedSize;
-(unsigned int)thumbOffset;
-(unsigned int)thumbPixHeight;
-(unsigned int)thumbPixWidth;
-(unsigned short)associationType;
-(unsigned short)imageOrietation;
-(unsigned short)objectFormat;
-(unsigned short)protectionStatus;
-(unsigned short)thumbFormat;
-(void)contentLength:(*unsigned int)arg0 bufferLength:(*unsigned int)arg1 ;
-(void)dealloc;
-(void)setAssociationType:(unsigned short)arg0 ;
-(void)setCaptureDate_tvsec:(NSUInteger)arg0 ;
-(void)setFilename:(id)arg0 ;
-(void)setImageBitDepth:(unsigned int)arg0 ;
-(void)setImageOrietation:(unsigned short)arg0 ;
-(void)setImagePixHeight:(unsigned int)arg0 ;
-(void)setImagePixWidth:(unsigned int)arg0 ;
-(void)setModificationDate_tvsec:(NSUInteger)arg0 ;
-(void)setObjectCompressedSize:(NSUInteger)arg0 ;
-(void)setObjectFormat:(unsigned short)arg0 ;
-(void)setObjectHandle:(unsigned int)arg0 ;
-(void)setParentObject:(unsigned int)arg0 ;
-(void)setProtectionStatus:(unsigned short)arg0 ;
-(void)setThumbCompressedSize:(unsigned int)arg0 ;
-(void)setThumbFormat:(unsigned short)arg0 ;
-(void)setThumbOffset:(unsigned int)arg0 ;
-(void)setThumbPixHeight:(unsigned int)arg0 ;
-(void)setThumbPixWidth:(unsigned int)arg0 ;


@end


#endif