// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLIOCOMPRESSOR_H
#define MTLIOCOMPRESSOR_H


#import <Foundation/Foundation.h>


@interface MTLIOCompressor : NSObject {
    *void context;
}




-(NSInteger)close;
-(id)initWithType:(NSInteger)arg0 dst:(id)arg1 chunkSize:(NSUInteger)arg2 ;
-(void)appendData:(id)arg0 ;
-(void)dealloc;


@end


#endif