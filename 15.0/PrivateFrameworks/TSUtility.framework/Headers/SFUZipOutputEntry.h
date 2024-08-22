// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUZIPOUTPUTENTRY_H
#define SFUZIPOUTPUTENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFUZipOutputEntry : NSObject {
    NSString *name;
    NSUInteger utf8NameLength;
    BOOL isCompressed;
    BOOL isEncrypted;
    unsigned int time;
    NSUInteger compressedSize;
    NSUInteger uncompressedSize;
    NSUInteger offset;
    NSUInteger compressedDataOffset;
    unsigned int crc;
    BOOL isWrittenDirectlyToFile;
    BOOL is64Bit;
}




-(NSInteger)compareByOffset:(id)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif