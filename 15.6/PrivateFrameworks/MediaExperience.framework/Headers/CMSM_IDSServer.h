// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMSM_IDSSERVER_H
#define CMSM_IDSSERVER_H

@class IDSService, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMSM_IDSServer : NSObject <IDSServiceDelegate>

 {
    IDSService *pIdsService;
    NSObject<OS_dispatch_queue> *idsDispatchQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif