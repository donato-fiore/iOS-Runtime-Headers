// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPMUTABLECRYPTOINFOINTERNAL_H
#define TSPMUTABLECRYPTOINFOINTERNAL_H

@class NSArray, SFUCryptoKey, NSString;
@protocol TSPMutableCryptoInfo;


#import "TSPCryptoInfoInternal.h"

@interface TSPMutableCryptoInfoInternal : TSPCryptoInfoInternal <TSPMutableCryptoInfo>



@property (readonly, nonatomic) NSArray *blockInfos;
@property (readonly, nonatomic) SFUCryptoKey *cryptoKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger decodedLength;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDecodedLength;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger preferredBlockSize;
@property (readonly) Class superclass;


-(id)initWithCryptoKey:(id)arg0 preferredBlockSize:(NSUInteger)arg1 blockInfos:(id)arg2 decodedLength:(NSUInteger)arg3 ;
-(void)addBlockInfo:(id)arg0 ;
-(void)incrementDecodedLengthBy:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif