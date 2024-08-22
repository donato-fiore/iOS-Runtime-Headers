// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGWIREDMEMORY_H
#define FIGWIREDMEMORY_H


#import <Foundation/Foundation.h>


@interface FigWiredMemory : NSObject {
    NSUInteger _roundedLength;
    BOOL _isWired;
}


@property (readonly, nonatomic) *void bytes; // ivar: _bytes
@property (readonly, nonatomic) NSUInteger length; // ivar: _length


+(void)initialize;
-(id)initWithLength:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif