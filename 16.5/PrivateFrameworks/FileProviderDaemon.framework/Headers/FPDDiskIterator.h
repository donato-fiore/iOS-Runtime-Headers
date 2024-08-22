// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDDISKITERATOR_H
#define FPDDISKITERATOR_H

@class NSString, NSError, NSURL;


#import "FPDIterator.h"

@interface FPDDiskIterator : FPDIterator {
    NSString *_basePath;
    BOOL _stopAccessingRoot;
    BOOL _lastItemWasPackage;
    BOOL _isFile;
    int _state;
    NSError *_error;
    NSUInteger _numFoldersPopped;
    *? _fts;
    *_ftsent _entry;
}


@property (readonly, nonatomic) NSURL *rootURL; // ivar: _rootURL


-(BOOL)done;
-(NSUInteger)numFoldersPopped;
-(id)error;
-(id)initWithURL:(id)arg0 isDirectory:(BOOL)arg1 ;
-(id)nextWithError:(*id)arg0 ;
-(void)dealloc;
-(void)skipDescendants;


@end


#endif