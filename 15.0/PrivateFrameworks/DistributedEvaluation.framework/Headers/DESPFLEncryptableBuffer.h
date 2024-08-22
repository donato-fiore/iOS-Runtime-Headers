// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DESPFLENCRYPTABLEBUFFER_H
#define DESPFLENCRYPTABLEBUFFER_H

@class NSMutableData, NSError;

#import <Foundation/Foundation.h>


@interface DESPFLEncryptableBuffer : NSObject {
    NSMutableData *_serializedData;
    NSUInteger _dataLengthVarintOffset;
    NSUInteger _mutableFloatsOffset;
    NSUInteger _ivOffset;
    NSUInteger _sizeOfDataTransport;
    NSUInteger _sizeOfDataTransportOffset;
    NSError *_encryptionError;
    BOOL _encryptionWasAttempted;
    BOOL _transportIsBfloat16;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) *float mutableDataNumbers;


-(id)encryptedDataWithPublicKey:(id)arg0 error:(*id)arg1 ;
-(id)initWithEncryptor:(id)arg0 count:(NSUInteger)arg1 ;


@end


#endif