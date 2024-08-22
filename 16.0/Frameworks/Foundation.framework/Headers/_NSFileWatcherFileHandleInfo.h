// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSFILEWATCHERFILEHANDLEINFO_H
#define _NSFILEWATCHERFILEHANDLEINFO_H


#import <Foundation/Foundation.h>


@interface _NSFileWatcherFileHandleInfo : NSObject {
    int fileHandle;
    BOOL closed;
}


@property (readonly) BOOL isDirectory;


+(id)openFileWithPath:(id)arg0 ;
-(BOOL)verifyAccessByAuditToken:(struct ? )arg0 ;
-(id)description;
-(void)close;
-(void)dealloc;


@end


#endif