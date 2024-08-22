// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMFINDEXMANAGER_H
#define EMFINDEXMANAGER_H

@class NSBundle, NSLock;

#import <Foundation/Foundation.h>

#import "EMFInvertedIndex.h"

@interface EMFIndexManager : NSObject {
    NSBundle *_searchEngineBundle;
    NSLock *_defaultIndexLock;
    NSLock *_stemmedIndexLock;
    BOOL _triedLoadingDefaultIndex;
    BOOL _triedLoadingStemmedIndex;
}


@property (copy, nonatomic) EMFInvertedIndex *defaultIndex; // ivar: _defaultIndex
@property (copy, nonatomic) EMFInvertedIndex *stemmedIndex; // ivar: _stemmedIndex


-(id)initWithBundle:(id)arg0 ;
-(void)preheatIndexes;


@end


#endif