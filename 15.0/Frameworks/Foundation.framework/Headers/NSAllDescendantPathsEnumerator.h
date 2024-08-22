// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSALLDESCENDANTPATHSENUMERATOR_H
#define NSALLDESCENDANTPATHSENUMERATOR_H

@class NSArray;


#import "NSDirectoryEnumerator.h"
#import "NSString.h"
#import "NSAllDescendantPathsEnumerator.h"
#import "NSFileAttributes.h"

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {
    NSString *path;
    NSArray *contents;
    NSUInteger idx;
    NSString *prepend;
    NSAllDescendantPathsEnumerator *under;
    NSFileAttributes *directoryAttributes;
    NSString *pathToLastReportedItem;
    NSUInteger depth;
    BOOL cross;
    char _padding;
}




+(id)newWithPath:(id)arg0 prepend:(id)arg1 attributes:(id)arg2 cross:(BOOL)arg3 depth:(NSUInteger)arg4 ;
-(BOOL)isEnumeratingDirectoryPostOrder;
-(NSUInteger)level;
-(id)_under;
-(id)currentSubdirectoryAttributes;
-(id)directoryAttributes;
-(id)fileAttributes;
-(id)nextObject;
-(void)dealloc;
-(void)skipDescendants;
-(void)skipDescendents;


@end


#endif