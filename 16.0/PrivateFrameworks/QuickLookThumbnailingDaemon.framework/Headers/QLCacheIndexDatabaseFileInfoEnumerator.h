// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLCACHEINDEXDATABASEFILEINFOENUMERATOR_H
#define QLCACHEINDEXDATABASEFILEINFOENUMERATOR_H

@class QLCacheVersionedFileIdentifier;


#import "QLCacheIndexDatabaseGenericEnumerator.h"

@interface QLCacheIndexDatabaseFileInfoEnumerator : QLCacheIndexDatabaseGenericEnumerator {
    BOOL _extraInfo;
    BOOL _ubiquitous;
    QLCacheVersionedFileIdentifier *_fileIdentifier;
}




-(BOOL)nextFileWithCacheId:(*NSUInteger)arg0 versionedFileIdentifier:(*id)arg1 thumbnailCount:(*unsigned int)arg2 minSize:(*float)arg3 maxSize:(*float)arg4 totalDataLength:(*NSUInteger)arg5 ;
-(id)initWithSqliteDatabase:(id)arg0 toEnumerateUbiquitousFiles:(BOOL)arg1 extraInfo:(BOOL)arg2 ;


@end


#endif