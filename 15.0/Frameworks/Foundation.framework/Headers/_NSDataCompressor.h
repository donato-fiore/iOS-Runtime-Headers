// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSDATACOMPRESSOR_H
#define _NSDATACOMPRESSOR_H


#import <Foundation/Foundation.h>


@interface _NSDataCompressor : NSObject {
    ? _stream;
    int _operation;
    int _status;
    *void _originalDstBuffer;
    id *_dataHandler;
}




-(BOOL)finishProcessing;
-(BOOL)processBytes:(char *)arg0 size:(NSUInteger)arg1 ;
-(BOOL)processBytes:(char *)arg0 size:(NSUInteger)arg1 flags:(int)arg2 ;
-(id)initWithAlgorithm:(int)arg0 operation:(int)arg1 dataHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif