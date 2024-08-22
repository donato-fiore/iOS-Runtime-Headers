// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFILEWATCHER_H
#define CKDFILEWATCHER_H

@class NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CKDFileWatcher : NSObject

@property (nonatomic) int fd; // ivar: _fd
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source; // ivar: _source


+(id)queue;
-(id)initWithPath:(id)arg0 ;
-(void)dealloc;


@end


#endif