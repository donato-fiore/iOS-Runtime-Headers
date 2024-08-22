// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TXRDEFERREDMIPMAPINFO_H
#define TXRDEFERREDMIPMAPINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TXRDeferredMipmapInfo : NSObject

@property (readonly, nonatomic) NSMutableArray *elements; // ivar: _elements


-(id)initWithArrayLength:(NSUInteger)arg0 cubemap:(BOOL)arg1 ;


@end


#endif