// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BUENCODEDBLOCKINFOWITHDECODEDLENGTHINTERNAL_H
#define BUENCODEDBLOCKINFOWITHDECODEDLENGTHINTERNAL_H



#import "BUEncodedBlockInfoInternal.h"

@interface BUEncodedBlockInfoWithDecodedLengthInternal : BUEncodedBlockInfoInternal {
    NSUInteger _decodedLength;
}




-(NSUInteger)decodedLength;
-(id)initWithEncodedLength:(NSUInteger)arg0 decodedLength:(NSUInteger)arg1 ;


@end


#endif