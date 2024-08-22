// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDATABOOKMARKCONTEXT_H
#define TSPDATABOOKMARKCONTEXT_H

@class TSUManagedTemporaryDirectory, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPDataBookmarkContext : NSObject {
    TSUManagedTemporaryDirectory *_temporaryDirectory;
    NSMutableDictionary *_bookmarkDataURLsForFilenames;
    NSMutableDictionary *_digestStringsForFilenames;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)bookmarkDataNeedsWriteForData:(id)arg0 ;
-(BOOL)isEncryptedDataStorate:(id)arg0 ;
-(id)init;
-(id)makeBookmarkDataForData:(id)arg0 filename:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;


@end


#endif