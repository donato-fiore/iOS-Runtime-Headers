// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BUIOUTILS_H
#define BUIOUTILS_H


#import <Foundation/Foundation.h>


@interface BUIOUtils : NSObject



+(struct CGDataProvider *)newCGDataProviderForInputStream:(id)arg0 ;
+(struct CGDataProvider *)newCGDataProviderForReadChannel:(id)arg0 ;
+(void)readAllFromChannel:(id)arg0 offset:(NSInteger)arg1 length:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif