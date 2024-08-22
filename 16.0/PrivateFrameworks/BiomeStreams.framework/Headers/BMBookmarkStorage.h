// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMBOOKMARKSTORAGE_H
#define BMBOOKMARKSTORAGE_H

@class BMFileManager;

#import <Foundation/Foundation.h>


@interface BMBookmarkStorage : NSObject {
    BMFileManager *_fileManager;
}




+(id)basePath;
+(id)currentSession;
+(id)currentSessionPath;
+(id)newFileManager;
+(id)persistentPath;
+(id)sessionsPath;
+(void)initializeBiomeDSLDirectoryForBootSession;
-(BOOL)checkExistenceOfBookmarkForSubscriptionWithIdentifier:(id)arg0 client:(id)arg1 ;
-(id)init;
-(id)pathForSessionStorageWithIdentifier:(id)arg0 client:(id)arg1 ;
-(id)readBookmarkForSubscriptionWithIdentifier:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
-(void)removeBookmarkFileForSubscriptionWithIdentifier:(id)arg0 client:(id)arg1 ;
-(void)writeBookmark:(id)arg0 forSubscriptionWithIdentifier:(id)arg1 client:(id)arg2 ;


@end


#endif