// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREFLATPLISTENUMERATOR_H
#define FIGCAPTUREFLATPLISTENUMERATOR_H

@class NSEnumerator;


#import "FigCaptureFlatPlist.h"

@interface FigCaptureFlatPlistEnumerator : NSEnumerator {
    FigCaptureFlatPlist *_flatPlist;
    *? _bplist;
    NSUInteger _offset;
    NSUInteger _count;
    NSUInteger _index;
}




-(id)allObjects;
-(id)initWithFlatPlist:(id)arg0 offset:(NSUInteger)arg1 count:(NSUInteger)arg2 ;
-(id)nextObject;


@end


#endif