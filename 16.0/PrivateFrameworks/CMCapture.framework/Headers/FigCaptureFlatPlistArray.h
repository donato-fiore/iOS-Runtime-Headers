// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREFLATPLISTARRAY_H
#define FIGCAPTUREFLATPLISTARRAY_H

@class NSArray;


#import "FigCaptureFlatPlist.h"

@interface FigCaptureFlatPlistArray : NSArray {
    FigCaptureFlatPlist *_flatPlist;
    *? _bplist;
    NSUInteger _offset;
    NSUInteger _count;
}




-(NSUInteger)count;
-(id)initWithFlatPlist:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif