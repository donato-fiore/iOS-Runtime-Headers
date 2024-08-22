// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTPOBJECTINFODATASET_H
#define PTPOBJECTINFODATASET_H

@class NSMutableString, NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface PTPObjectInfoDataset : NSObject {
    NSUInteger _objectCompressedSize;
    NSMutableString *_keywords;
    NSUUID *_relatedUUID;
    NSInteger _intervalSince1970;
}


@property (nonatomic) unsigned int associationDesc; // ivar: _associationDesc
@property (nonatomic) unsigned short associationType; // ivar: _associationType
@property (copy, nonatomic) NSString *captureDate; // ivar: _captureDate
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (nonatomic) unsigned int imageBitDepth; // ivar: _imageBitDepth
@property (nonatomic) unsigned int imagePixHeight; // ivar: _imagePixHeight
@property (nonatomic) unsigned int imagePixWidth; // ivar: _imagePixWidth
@property (copy, nonatomic) NSString *modificationDate; // ivar: _modificationDate
@property (nonatomic) unsigned short objectFormat; // ivar: _objectFormat
@property (nonatomic) unsigned int objectHandle; // ivar: _objectHandle
@property (nonatomic) unsigned int parentObject; // ivar: _parentObject
@property (nonatomic) unsigned short protectionStatus; // ivar: _protectionStatus
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) unsigned int storageID; // ivar: _storageID
@property (nonatomic) unsigned int thumbCompressedSize; // ivar: _thumbCompressedSize
@property (nonatomic) unsigned short thumbFormat; // ivar: _thumbFormat
@property (nonatomic) unsigned int thumbOffset; // ivar: _thumbOffset
@property (nonatomic) unsigned int thumbPixHeight; // ivar: _thumbPixHeight
@property (nonatomic) unsigned int thumbPixWidth; // ivar: _thumbPixWidth


-(BOOL)contentLengthValid:(unsigned int)arg0 forContentType:(int)arg1 ;
-(NSInteger)intervalSince1970;
-(NSUInteger)objectCompressedSize64;
-(id)content;
-(id)content:(int)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBytes:(char *)arg0 length:(unsigned int)arg1 ;
-(id)initWithBytes:(char *)arg0 length:(unsigned int)arg1 contentType:(int)arg2 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 contentType:(int)arg1 ;
-(id)keywords;
-(id)relatedUUID;
-(unsigned int)objectBufferSizeForContentType:(int)arg0 ;
-(unsigned int)objectCompressedSize;
-(unsigned int)objectContentSizeForContentType:(int)arg0 ;
-(void)addCustomKeyword:(id)arg0 withIdentifier:(id)arg1 ;
-(void)contentLength:(*unsigned int)arg0 bufferLength:(*unsigned int)arg1 contentType:(int)arg2 ;
-(void)dealloc;
-(void)setKeywords:(id)arg0 ;
-(void)setObjectCompressedSize:(NSUInteger)arg0 ;


@end


#endif