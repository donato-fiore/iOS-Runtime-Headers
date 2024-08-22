// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKBOOKMARKMIGRATOR_H
#define MKBOOKMARKMIGRATOR_H

@class WebBookmarkCollection, NSMutableDictionary;


#import "MKMigrator.h"

@interface MKBookmarkMigrator : MKMigrator {
    WebBookmarkCollection *_collection;
    NSMutableDictionary *_rootFolder;
}




-(id)_bookmarkFolderAtTitlePath:(id)arg0 withinBookmarkFolder:(id)arg1 ;
-(id)_bookmarkFolderAtTitlePath:(id)arg0 withinRootFolder:(id)arg1 ;
-(id)_createBookmarkFolderWithTitle:(id)arg0 UUID:(id)arg1 ;
-(id)_createRootBookmarkFolder;
-(id)init;
-(void)import:(id)arg0 ;
-(void)importDataEncodedInJSON:(id)arg0 ;


@end


#endif