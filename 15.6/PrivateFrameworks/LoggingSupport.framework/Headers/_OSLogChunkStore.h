// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _OSLOGCHUNKSTORE_H
#define _OSLOGCHUNKSTORE_H


#import <Foundation/Foundation.h>


@interface _OSLogChunkStore : NSObject {
    *void _ptr;
    NSUInteger _sz;
}




-(id)initWithBytes:(*void)arg0 size:(NSUInteger)arg1 ;
-(void)enumerateChunksInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)enumerateChunksUsingBlock:(id)arg0 ;


@end


#endif