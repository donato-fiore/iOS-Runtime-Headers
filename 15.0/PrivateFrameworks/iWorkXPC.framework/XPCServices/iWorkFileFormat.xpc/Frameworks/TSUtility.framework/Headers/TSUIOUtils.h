// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUIOUTILS_H
#define TSUIOUTILS_H


#import <Foundation/Foundation.h>


@interface TSUIOUtils : NSObject



+(?)newCGDataProviderForReadChannel:(?)arg0 length:(?)arg1 outInfooutCallbacks;
+(struct CGDataProvider *)newCGDataProviderForInputStream:(id)arg0 ;
+(struct CGDataProvider *)newCGDataProviderForInputStream:(id)arg0 outInfo:(**void)arg1 outCallbacks:(struct CGDataProviderSequentialCallbacks **)arg2 ;
+(struct CGDataProvider *)newCGDataProviderForReadChannel:(id)arg0 length:(NSUInteger)arg1 ;
+(void)readAllFromChannel:(id)arg0 completion:(id)arg1 ;
+(void)readAllFromChannel:(id)arg0 offset:(NSInteger)arg1 length:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)readFromOffsetAndWait:(id)arg0 offset:(NSInteger)arg1 length:(NSUInteger)arg2 handler:(id)arg3 ;
+(void)readWithHandlerAndWait:(id)arg0 handler:(id)arg1 ;


@end


#endif