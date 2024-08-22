// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMOMENTSMANAGER_H
#define VCMOMENTSMANAGER_H

@class NSMutableDictionary, NSString;
@protocol VCMomentsMessengerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCMomentsManager : NSObject <VCMomentsMessengerDelegate>

 {
    NSMutableDictionary *_streamTokenList;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VCMomentsMessengerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)messengerFromClientContext:(id)arg0 ;
-(id)newRequestWithArguments:(id)arg0 state:(unsigned char)arg1 ;
-(void)dealloc;
-(void)notifyClientsWithStreamToken:(NSInteger)arg0 service:(char *)arg1 arguments:(id)arg2 ;
-(void)registerBlocksForService;
-(void)registerMomentsMessenger:(id)arg0 withStreamToken:(NSInteger)arg1 ;
-(void)saveImage:(id)arg0 movie:(id)arg1 ;
-(void)streamToken:(NSInteger)arg0 didEndProcessingRequest:(id)arg1 stillImageURL:(id)arg2 movieURL:(id)arg3 error:(id)arg4 ;
-(void)streamToken:(NSInteger)arg0 didFinishRequest:(id)arg1 didSucceed:(BOOL)arg2 ;
-(void)streamToken:(NSInteger)arg0 didStartProcessingRequest:(id)arg1 error:(id)arg2 ;
-(void)streamTokenDidCleanupAllRequests:(NSInteger)arg0 ;
-(void)unregisterMomentsMessengerWithStreamToken:(NSInteger)arg0 ;


@end


#endif