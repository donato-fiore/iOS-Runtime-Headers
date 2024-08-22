// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDSERIALIZABLEKEYEDDATA_H
#define _CDSERIALIZABLEKEYEDDATA_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface _CDSerializableKeyedData : NSObject {
    NSData *_encodedKey;
    unsigned char _keyChecksum;
    unsigned char _dataChecksum;
    BOOL _dataChecksumNeedsUpdate;
    NSString *_key;
    NSData *_data;
}




+(id)dataDeseralizedFrom:(*void)arg0 maxSize:(NSUInteger)arg1 checksum:(char *)arg2 bytesRead:(*NSUInteger)arg3 ;
+(id)errorForInvalidKeyEncoding;
+(id)log;
+(unsigned char)byteChecksumOfData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)serializeData:(id)arg0 withChecksum:(unsigned char)arg1 to:(*void)arg2 ;


@end


#endif