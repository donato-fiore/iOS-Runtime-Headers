// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREFLATPLISTSET_H
#define FIGCAPTUREFLATPLISTSET_H

@class NSSet;


#import "FigCaptureFlatPlist.h"

@interface FigCaptureFlatPlistSet : NSSet {
    FigCaptureFlatPlist *_flatPlist;
    *? _bplist;
    NSUInteger _offset;
    NSUInteger _count;
}




-(NSUInteger)count;
-(id)initWithFlatPlist:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)member:(id)arg0 ;
-(id)objectEnumerator;
-(void)dealloc;


@end


#endif