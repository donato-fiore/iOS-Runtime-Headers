// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HCINDEXTABLE_H
#define HCINDEXTABLE_H

@class NSUUID, NSData;

#import <Foundation/Foundation.h>


@interface HCIndexTable : NSObject {
    vector<unsigned long long, std::allocator<unsigned long long>> _mutableHuffmanCodes;
    NSUUID *_versionUUID;
    *HCIndexTableFileHeader _fileHeader;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) *HCIndexTableFileHeader fileHeader;
@property (readonly, nonatomic) *NSUInteger huffmanCodes;
@property (readonly, nonatomic) NSData *huffmanCodesMemoryMappedData; // ivar: _huffmanCodesMemoryMappedData
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) NSUUID *versionUUID;


+(id)indexTableFromFile:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 ;
-(id)codeAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithHuffmanCodesMemoryMappedData:(id)arg0 ;


@end


#endif