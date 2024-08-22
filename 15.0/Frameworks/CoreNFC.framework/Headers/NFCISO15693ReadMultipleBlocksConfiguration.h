// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCISO15693READMULTIPLEBLOCKSCONFIGURATION_H
#define NFCISO15693READMULTIPLEBLOCKSCONFIGURATION_H



#import "NFCTagCommandConfiguration.h"

@interface NFCISO15693ReadMultipleBlocksConfiguration : NFCTagCommandConfiguration

@property (nonatomic) NSUInteger chunkSize; // ivar: _chunkSize
@property (nonatomic) unsigned char flags; // ivar: _flags
@property (nonatomic) _NSRange range; // ivar: _range


-(id)asNSDataArrayWithUID:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 chunkSize:(NSUInteger)arg1 ;
-(id)initWithRange:(struct _NSRange )arg0 chunkSize:(NSUInteger)arg1 maximumRetries:(NSUInteger)arg2 retryInterval:(CGFloat)arg3 ;


@end


#endif