// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDATASTORAGEWRITERESULT_H
#define TSPDATASTORAGEWRITERESULT_H

@class NSString;
@protocol TSPCryptoInfo;

#import <Foundation/Foundation.h>


@interface TSPDataStorageWriteResult : NSObject

@property (readonly, nonatomic) NSUInteger changeCount; // ivar: _changeCount
@property (readonly, nonatomic) NSUInteger encodedLength; // ivar: _encodedLength
@property (readonly, nonatomic) NSObject<TSPCryptoInfo> *encryptionInfo; // ivar: _encryptionInfo
@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) BOOL isMissingData; // ivar: _isMissingData
@property (readonly, nonatomic) NSInteger packageStorageType; // ivar: _packageStorageType


-(id)init;
-(id)initWithFilename:(id)arg0 encryptionInfo:(id)arg1 packageStorageType:(NSInteger)arg2 encodedLength:(NSUInteger)arg3 isMissingData:(BOOL)arg4 changeCount:(NSUInteger)arg5 ;


@end


#endif