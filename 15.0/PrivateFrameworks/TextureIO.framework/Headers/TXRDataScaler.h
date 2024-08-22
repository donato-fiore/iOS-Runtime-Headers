// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRDATASCALER_H
#define TXRDATASCALER_H


#import <Foundation/Foundation.h>


@interface TXRDataScaler : NSObject



+(id)newImageFromSourceImage:(id)arg0 bufferAllocattor:(id)arg1 filter:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)newImageFromSourceImage:(id)arg0 scaledDimensions:(id)arg1 bufferAllocattor:(NSUInteger)arg2 filter:(*id)arg3 error;


@end


#endif