// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLCOUNTERSTRACECOMMANDENCODER_H
#define MTLCOUNTERSTRACECOMMANDENCODER_H


#import <Foundation/Foundation.h>


@interface MTLCountersTraceCommandEncoder : NSObject {
    NSUInteger _timer;
    *BinaryBuffer _stream;
}


@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, nonatomic) _NSRange segment; // ivar: _segment


-(id)init:(struct BinaryBuffer *)arg0 flags:(NSUInteger)arg1 ;
-(void)endEncoding;
-(void)insertDebugSignpost:(id)arg0 ;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setLabel:(id)arg0 ;


@end


#endif