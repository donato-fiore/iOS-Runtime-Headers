// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFZLIBDATACOMPRESSION_H
#define PFZLIBDATACOMPRESSION_H


#import <Foundation/Foundation.h>


@interface PFZlibDataCompression : NSObject



+(id)compressData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)decompressData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif