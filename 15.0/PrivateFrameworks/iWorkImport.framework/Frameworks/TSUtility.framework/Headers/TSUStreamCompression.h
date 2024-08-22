// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUSTREAMCOMPRESSION_H
#define TSUSTREAMCOMPRESSION_H


#import <Foundation/Foundation.h>


@interface TSUStreamCompression : NSObject {
    int _status;
    ? _stream;
    int _operation;
}


@property (copy, nonatomic) id *handler; // ivar: _handler


-(BOOL)didFinishProcessing;
-(BOOL)processBytes:(char *)arg0 size:(NSUInteger)arg1 ;
-(BOOL)processBytes:(char *)arg0 size:(NSUInteger)arg1 flags:(int)arg2 ;
-(id)initWithAlgorithm:(int)arg0 operation:(int)arg1 ;
-(void)dealloc;


@end


#endif