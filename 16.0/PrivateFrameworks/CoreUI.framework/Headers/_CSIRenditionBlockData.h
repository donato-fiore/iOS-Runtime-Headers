// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSIRENDITIONBLOCKDATA_H
#define _CSIRENDITIONBLOCKDATA_H


#import <Foundation/Foundation.h>


@interface _CSIRenditionBlockData : NSObject {
    unsigned int _dataPixelFormat;
    int _pixelFormat;
    char * _data;
    unsigned int _nrows;
    NSUInteger _rowbytes;
    uint8_t _imageBytes;
    char _name;
    unsigned char _imageBlockReleaseCount;
    NSUInteger _sourceRowbytes;
    NSUInteger _allocationSize;
    BOOL _allocateMemory;
    BOOL _mmappedData;
}




-(void)dealloc;


@end


#endif