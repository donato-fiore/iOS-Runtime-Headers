// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAACCESSREADER_H
#define PAACCESSREADER_H

@class NSArray, NSXPCConnection;
@protocol PAAccessReaderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PAAccessReaderSandboxExtension.h"

@interface PAAccessReader : NSObject {
    os_unfair_lock_s _lock;
    char _enabledState;
    PAAccessReaderSandboxExtension *_sandboxExtension;
    NSArray *_streams;
    int _enablementChangedNotificationToken;
}


@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak) NSObject<PAAccessReaderDelegate> *delegate; // ivar: _delegate
@property BOOL loggingEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(BOOL)exportFromPublisher:(id)arg0 toStream:(id)arg1 error:(*id)arg2 ;
+(BOOL)exportFromPublisher:(id)arg0 toStream:(id)arg1 withCancellationToken:(id)arg2 error:(*id)arg3 ;
+(id)fileNameForExport;
+(id)sharedInstance;
-(BOOL)lockedEnsureSandboxExtensionWithError:(*id)arg0 ;
-(id)getOrCreateStreamsWithError:(*id)arg0 ;
-(id)initWithConnection:(id)arg0 queue:(id)arg1 ;
-(id)initWithConnection:(id)arg0 queue:(id)arg1 enablementChangedNotificationName:(id)arg2 ;
-(id)initWithQueue:(id)arg0 ;
-(id)publisherForAll;
-(id)publisherForAllSince:(CGFloat)arg0 error:(*id)arg1 ;
-(id)publisherForAllSince:(id)arg0 until:(id)arg1 reversed:(BOOL)arg2 error:(*id)arg3 ;
-(id)publisherForReportWithError:(*id)arg0 ;
-(id)requestSandboxExtensionWithError:(*id)arg0 ;
-(void)dealloc;
-(void)exportToFileHandle:(id)arg0 completion:(id)arg1 ;
-(void)handleEnabledChangeNotification;
-(void)lockedAssertValidEnabledState;
-(void)lockedNotifyDidSetLoggingEnabled:(BOOL)arg0 ;
-(void)lockedSetEnabledStateForLoggingEnabled:(BOOL)arg0 ;
-(void)setEnabledStateForLoggingEnabled:(BOOL)arg0 ;


@end


#endif