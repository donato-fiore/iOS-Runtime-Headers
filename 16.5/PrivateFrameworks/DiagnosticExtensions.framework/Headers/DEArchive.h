// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEARCHIVE_H
#define DEARCHIVE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface DEArchive : NSObject {
    *archive _archive;
    BOOL _hasClosedArchive;
}


@property (retain) NSURL *sourceDir; // ivar: _sourceDir
@property (retain) NSURL *tarGzUrl; // ivar: _tarGzUrl


-(BOOL)addFile:(id)arg0 withPathName:(id)arg1 ;
-(BOOL)addFile:(id)arg0 withPathName:(id)arg1 progressHandler:(id)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(struct archive *)archiverForUrl:(id)arg0 ;
-(void)closeArchive;
-(void)dealloc;


@end


#endif