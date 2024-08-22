// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPFILEDATASTORAGE_H
#define TSPFILEDATASTORAGE_H

@protocol TSPCryptoInfo;


#import "TSPStreamDataStorage.h"

@interface TSPFileDataStorage : TSPStreamDataStorage

@property (readonly, nonatomic) NSObject<TSPCryptoInfo> *decryptionInfo;


-(BOOL)isReadable;
-(NSUInteger)encodedLength;
-(id)AVAssetWithOptions:(id)arg0 forData:(id)arg1 ;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)performReadOnBookmarkDataSourceURLWithAccessor:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;


@end


#endif