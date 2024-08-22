// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSURLDIRECTORYENUMERATOR_H
#define NSURLDIRECTORYENUMERATOR_H



#import "NSDirectoryEnumerator.h"

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
    *__CFURLEnumerator _enumerator;
    BOOL shouldContinue;
    BOOL isPostOrderDirectory;
}


@property (copy) id *errorHandler; // ivar: _errorHandler


-(BOOL)isEnumeratingDirectoryPostOrder;
-(NSUInteger)level;
-(id)directoryAttributes;
-(id)fileAttributes;
-(id)initWithURL:(id)arg0 includingPropertiesForKeys:(id)arg1 options:(NSUInteger)arg2 errorHandler:(id)arg3 ;
-(id)nextObject;
-(void)dealloc;
-(void)skipDescendants;
-(void)skipDescendents;


@end


#endif