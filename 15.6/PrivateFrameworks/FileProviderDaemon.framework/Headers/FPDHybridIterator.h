// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDHYBRIDITERATOR_H
#define FPDHYBRIDITERATOR_H

@class FPItem, NSURL;


#import "FPDIterator.h"
#import "FPDProvider.h"

@interface FPDHybridIterator : FPDIterator {
    FPItem *_rootItem;
    NSURL *_rootURL;
    FPDProvider *_provider;
    BOOL _done;
    NSUInteger _totalDatalessFoldersPopped;
    BOOL insideADatalessFolder;
    FPDIterator *datalessFolderIterator;
    FPDIterator *diskIterator;
}




-(BOOL)done;
-(NSUInteger)numFoldersPopped;
-(id)error;
-(id)initWithItem:(id)arg0 provider:(id)arg1 ;
-(id)nextWithError:(*id)arg0 ;
-(void)dealloc;


@end


#endif