// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFZIPLOCALFILEHEADER_H
#define PFZIPLOCALFILEHEADER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface PFZipLocalFileHeader : NSObject {
    unsigned short _versionNeededToExtract;
    unsigned short _generalPurposeBit;
    unsigned short _compressionMethod;
    unsigned short _lastModTime;
    unsigned short _lastModDate;
    unsigned int _crc32;
    unsigned int _compressedSize;
    unsigned int _uncompressedSize;
    unsigned short _filenameLength;
    unsigned short _extraFieldLength;
    NSString *_filename;
    NSData *_extraFieldData;
}




-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif