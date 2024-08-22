// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKDOCUMENTSMANAGER_H
#define OKDOCUMENTSMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OKDocumentsManager : NSObject {
    NSObject<OS_dispatch_queue> *_documentsAccessQueue;
}




+(id)defaultManager;
-(BOOL)deleteFileURL:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)documentURLs:(*id)arg0 ;
-(id)documentURLsAtDirectoryURL:(id)arg0 error:(*id)arg1 ;
-(id)documentsDirectoryURL;
-(id)duplicateFileURL:(id)arg0 error:(*id)arg1 ;
-(id)duplicateFileURL:(id)arg0 toDirectoryURL:(id)arg1 error:(*id)arg2 ;
-(id)importFileURL:(id)arg0 error:(*id)arg1 ;
-(id)importFileURL:(id)arg0 toDirectoryURL:(id)arg1 copy:(BOOL)arg2 error:(*id)arg3 ;
-(id)importFileURL:(id)arg0 toDirectoryURL:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)localDocumentsDirectoryURL;
-(id)renameFileURL:(id)arg0 toFileName:(id)arg1 error:(*id)arg2 ;
-(id)uniqueFileURLForFileName:(id)arg0 error:(*id)arg1 ;
-(id)uniqueFileURLForFileName:(id)arg0 inDirectoryURL:(id)arg1 error:(*id)arg2 ;
-(void)_performAsynchronousFileAccessUsingBlock:(id)arg0 ;
-(void)dealloc;
-(void)performAsynchronousFileAccessUsingBlock:(id)arg0 ;


@end


#endif