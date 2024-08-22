// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETERROR_H
#define MAAUTOASSETERROR_H


#import <Foundation/Foundation.h>


@interface MAAutoAssetError : NSObject



+(id)buildError:(NSInteger)arg0 fromOperation:(id)arg1 underlyingError:(id)arg2 withDescription:(id)arg3 ;
+(id)summaryForCode:(NSInteger)arg0 fromOperation:(id)arg1 ;


@end


#endif