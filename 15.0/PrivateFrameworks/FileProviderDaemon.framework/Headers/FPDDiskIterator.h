// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDDISKITERATOR_H
#define FPDDISKITERATOR_H

@class NSURL, NSError;


#import "FPDIterator.h"

@interface FPDDiskIterator : FPDIterator {
    NSURL *_rootURL;
    BOOL _stopAccessingRoot;
    BOOL _sentRoot;
    BOOL _lastItemWasPackage;
    BOOL _done;
    NSError *_error;
    NSUInteger _numFoldersPopped;
    *__CFURLEnumerator _enumerator;
}




-(BOOL)done;
-(NSUInteger)numFoldersPopped;
-(id)error;
-(id)initWithURL:(id)arg0 isDirectory:(BOOL)arg1 ;
-(id)nextWithError:(*id)arg0 ;
-(void)dealloc;


@end


#endif