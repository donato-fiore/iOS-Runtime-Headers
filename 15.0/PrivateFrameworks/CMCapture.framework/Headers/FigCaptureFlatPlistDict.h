// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREFLATPLISTDICT_H
#define FIGCAPTUREFLATPLISTDICT_H

@class NSDictionary;


#import "FigCaptureFlatPlist.h"

@interface FigCaptureFlatPlistDict : NSDictionary {
    FigCaptureFlatPlist *_flatPlist;
    *? _bplist;
    NSUInteger _offset;
    NSUInteger _count;
}




-(NSUInteger)count;
-(id)initWithFlatPlist:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;


@end


#endif