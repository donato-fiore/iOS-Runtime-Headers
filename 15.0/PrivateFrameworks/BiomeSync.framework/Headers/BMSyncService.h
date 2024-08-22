// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSYNCSERVICE_H
#define BMSYNCSERVICE_H

@protocol BMSyncServiceClientProtocol;

#import <Foundation/Foundation.h>


@interface BMSyncService : NSObject <BMSyncServiceClientProtocol>





-(BOOL)triggerSyncWithError:(*id)arg0 ;
-(id)connection;
-(id)peerInformationWithError:(*id)arg0 ;
-(void)triggerSyncWithReply:(id)arg0 ;


@end


#endif