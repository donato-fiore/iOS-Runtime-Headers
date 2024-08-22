// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPEXTERNALREFERENCEDATASTORAGE_H
#define TSPEXTERNALREFERENCEDATASTORAGE_H

@class NSURL, NSData;


#import "TSPFileDataStorage.h"
#import "TSPObjectContext.h"

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    NSData *_bookmarkData;
    BOOL _isReachable;
    TSPObjectContext *_context;
}




-(BOOL)archiveInfoMessage:(*void)arg0 archiver:(id)arg1 packageWriter:(id)arg2 ;
-(BOOL)isReadable;
-(id)bookmarkDataForArchiver:(id)arg0 ;
-(id)initWithBookmarkData:(id)arg0 context:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;


@end


#endif