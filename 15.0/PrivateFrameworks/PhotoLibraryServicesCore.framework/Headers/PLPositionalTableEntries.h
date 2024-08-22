// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPOSITIONALTABLEENTRIES_H
#define PLPOSITIONALTABLEENTRIES_H

@class NSIndexSet;

#import <Foundation/Foundation.h>


@interface PLPositionalTableEntries : NSObject {
    **void _buffers;
}


@property (readonly, nonatomic) NSUInteger entryLength; // ivar: _entryLength
@property (readonly, nonatomic) NSIndexSet *readIndexes; // ivar: _readIndexes


-(id)initWithBuffers:(*void)arg0 forIndexes:(id)arg1 entryLength:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)enumerateIndexes:(id)arg0 ;


@end


#endif