// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCWORKSPACE_H
#define ASCWORKSPACE_H

@class NSOperationQueue, NSMutableDictionary, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface ASCWorkspace : NSObject

@property (readonly, nonatomic, getter=isExtension) BOOL extension;
@property (retain, nonatomic) NSOperationQueue *openApplicationOperationQueue; // ivar: _openApplicationOperationQueue
@property (readonly) NSMutableDictionary *pendingResults; // ivar: _pendingResults
@property (readonly, nonatomic) NSRecursiveLock *stateLock; // ivar: _stateLock


+(id)log;
+(id)sharedWorkspace;
+(void)withSharedWorkspace:(id)arg0 perform:(id)arg1 ;
-(id)_init;
-(id)openApplicationWithBundleIdentifier:(id)arg0 payloadURL:(id)arg1 ;
-(id)openProductURL:(id)arg0 ;
-(id)openSensitiveURL:(id)arg0 ;
-(id)openURL:(id)arg0 ;
-(id)openURL:(id)arg0 frontBoardOptions:(id)arg1 ;
-(id)popPendingResultForOperationName:(id)arg0 ;
-(void)enqueueOpenApplicationOperation:(id)arg0 pendingResult:(id)arg1 ;
-(void)openApplicationWithBundleIdentifier:(id)arg0 configuration:(id)arg1 pendingResult:(id)arg2 ;
-(void)openApplicationWithBundleIdentifier:(id)arg0 usingOpenResourceOperationWithPayloadURL:(id)arg1 options:(id)arg2 pendingResult:(id)arg3 ;
-(void)openResourceOperation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)openResourceOperationDidComplete:(id)arg0 ;


@end


#endif