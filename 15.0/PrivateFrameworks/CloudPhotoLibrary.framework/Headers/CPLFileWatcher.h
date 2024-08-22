// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLFILEWATCHER_H
#define CPLFILEWATCHER_H

@class NSURL, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, CPLFileWatcherDelegate;

#import <Foundation/Foundation.h>


@interface CPLFileWatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    NSUInteger _nodeInode;
}


@property (weak, nonatomic) NSObject<CPLFileWatcherDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)initWithFileURL:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithFileURL:(id)arg0 name:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(id)redactedDescription;
-(void)_forceRefreshWatchingNode;
-(void)_startWatchingNode;
-(void)_startWatchingParent;
-(void)_stopWatchingNode;
-(void)_stopWatchingParent;
-(void)_updateWatchingNode;
-(void)startWatching;
-(void)stopWatching;


@end


#endif