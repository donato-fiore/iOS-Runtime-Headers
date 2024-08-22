// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATREMOTEFILEMANAGER_H
#define ATREMOTEFILEMANAGER_H


#import <Foundation/Foundation.h>

#import "ATMessageLink.h"

@interface ATRemoteFileManager : NSObject

@property (retain, nonatomic) ATMessageLink *messageLink; // ivar: _messageLink


-(BOOL)copyItemAtPath:(id)arg0 toPath:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)createDirectoryAtPath:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)downloadFileAtPath:(id)arg0 toPath:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)downloadFilesAtPaths:(id)arg0 options:(id)arg1 results:(*id)arg2 error:(*id)arg3 ;
-(BOOL)freeSpace:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)moveItemAtPath:(id)arg0 toPath:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)moveItemsAtPaths:(id)arg0 options:(id)arg1 results:(*id)arg2 error:(*id)arg3 ;
-(BOOL)removeItemAtPath:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeItemsAtPaths:(id)arg0 options:(id)arg1 results:(*id)arg2 error:(*id)arg3 ;
-(BOOL)uploadData:(id)arg0 toPath:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)uploadFileAtPath:(id)arg0 toPath:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)uploadFilesAtPaths:(id)arg0 options:(id)arg1 results:(*id)arg2 error:(*id)arg3 ;
-(BOOL)usageOfDirectoryAtPath:(id)arg0 count:(*NSUInteger)arg1 size:(*NSUInteger)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)_readStreamData:(id)arg0 error:(*id)arg1 ;
-(id)_sendRequest:(id)arg0 error:(*id)arg1 ;
-(id)contentsOfDirectoryAtPath:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)dataAtPath:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithMessageLink:(id)arg0 ;
-(void)progressUpdatedWithPercentage:(CGFloat)arg0 size:(NSUInteger)arg1 ;


@end


#endif