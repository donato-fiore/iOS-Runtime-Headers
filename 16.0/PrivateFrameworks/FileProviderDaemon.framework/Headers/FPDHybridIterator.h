// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDHYBRIDITERATOR_H
#define FPDHYBRIDITERATOR_H

@class FPItem, NSURL;


#import "FPDIterator.h"
#import "FPDDomain.h"
#import "FPDDiskIterator.h"

@interface FPDHybridIterator : FPDIterator {
    FPItem *_rootItem;
    NSURL *_rootURL;
    FPDDomain *_domain;
    BOOL _done;
    NSUInteger _totalDatalessFoldersPopped;
    BOOL _enforceFPItem;
    BOOL _insideADatalessFolder;
    FPDIterator *_datalessFolderIterator;
    FPDDiskIterator *_diskIterator;
}




-(BOOL)done;
-(NSUInteger)numFoldersPopped;
-(id)error;
-(id)initWithItem:(id)arg0 domain:(id)arg1 enforceFPItem:(BOOL)arg2 ;
-(id)nextWithError:(*id)arg0 ;
-(void)dealloc;


@end


#endif