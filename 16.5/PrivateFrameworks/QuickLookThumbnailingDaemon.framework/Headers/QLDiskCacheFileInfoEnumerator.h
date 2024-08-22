// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLDISKCACHEFILEINFOENUMERATOR_H
#define QLDISKCACHEFILEINFOENUMERATOR_H



#import "QLDiskCacheEnumerator.h"
#import "QLCacheIndexDatabaseFileInfoEnumerator.h"

@interface QLDiskCacheFileInfoEnumerator : QLDiskCacheEnumerator {
    BOOL _extraInfo;
    BOOL _ubiquitous;
    QLCacheIndexDatabaseFileInfoEnumerator *_indexEnumerator;
}




-(id)initWithDiskCache:(id)arg0 forUbiquitousFiles:(BOOL)arg1 extraInfo:(BOOL)arg2 ;
-(id)nextFileInfo;


@end


#endif