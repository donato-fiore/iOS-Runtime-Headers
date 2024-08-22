// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUIOUTILS_H
#define TSUIOUTILS_H


#import <Foundation/Foundation.h>


@interface TSUIOUtils : NSObject



+(struct CGDataProvider *)newCGDataProviderForInputStream:(id)arg0 ;
+(struct CGDataProvider *)newCGDataProviderForReadChannel:(id)arg0 ;
+(void)readAllFromChannel:(id)arg0 offset:(NSInteger)arg1 length:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif