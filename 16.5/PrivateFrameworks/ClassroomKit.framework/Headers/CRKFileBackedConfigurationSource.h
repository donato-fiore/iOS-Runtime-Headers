// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFILEBACKEDCONFIGURATIONSOURCE_H
#define CRKFILEBACKEDCONFIGURATIONSOURCE_H

@class NSURL, NSOperationQueue, NSString;
@protocol CRKConfigurationSource, OS_dispatch_queue, CRKFileBackedConfigurationSourceDelegate;

#import <Foundation/Foundation.h>


@interface CRKFileBackedConfigurationSource : NSObject <CRKConfigurationSource>

 {
    NSURL *mFileURL;
    NSObject<OS_dispatch_queue> *mCallbackQueue;
    NSOperationQueue *mFileOperationQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CRKFileBackedConfigurationSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)deleteConfigurationAtURL:(id)arg0 inDirectory:(id)arg1 error:(*id)arg2 ;
-(BOOL)isReadErrorBenign:(id)arg0 ;
-(id)directoryURL;
-(id)init;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 callbackQueue:(id)arg1 ;
-(void)delegateDidDeleteConfigurationAtURL:(id)arg0 inDirectory:(id)arg1 ;
-(void)executeIntents:(id)arg0 accessBlock:(id)arg1 ;
-(void)fetchConfiguration:(id)arg0 ;
// -(void)invokeCompletionBlock:(id)arg0 withConfiguration:(unk)arg1 error:(id)arg2  ;
// -(void)invokeCompletionBlock:(id)arg0 withError:(unk)arg1  ;
-(void)setConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif