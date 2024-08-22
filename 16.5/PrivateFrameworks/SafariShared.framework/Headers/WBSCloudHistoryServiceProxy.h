// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCLOUDHISTORYSERVICEPROXY_H
#define WBSCLOUDHISTORYSERVICEPROXY_H

@class NSString;
@protocol WBSCloudHistoryServiceProtocol, NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface WBSCloudHistoryServiceProxy : NSObject <WBSCloudHistoryServiceProtocol>

 {
    id<NSXPCProxyCreating> *_proxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_defaultProxyErrorHandlerWithSimpleReplyHandler:(SEL)arg0 ;
-(id)initWithProxy:(id)arg0 ;
-(void)fetchAndMergeChangesBypassingThrottler:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:(id)arg0 ;
-(void)resetForAccountChangeWithCompletionHandler:(id)arg0 ;
-(void)saveChangesBypassingThrottler:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif