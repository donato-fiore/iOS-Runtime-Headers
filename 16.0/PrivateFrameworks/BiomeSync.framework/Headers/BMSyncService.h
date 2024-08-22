// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSYNCSERVICE_H
#define BMSYNCSERVICE_H

@protocol BMSyncServiceClientProtocol;

#import <Foundation/Foundation.h>


@interface BMSyncService : NSObject <BMSyncServiceClientProtocol>





-(BOOL)triggerCloudKitSyncWithError:(*id)arg0 ;
-(BOOL)triggerRapportSyncWithError:(*id)arg0 ;
-(BOOL)triggerSyncWithError:(*id)arg0 ;
-(id)cloudKitSyncWithErrors:(*id)arg0 ;
-(id)connection;
-(id)peerInformationWithError:(*id)arg0 ;
-(id)rapportSyncWithErrors:(*id)arg0 ;
-(void)triggerCloudKitSyncWithReply:(id)arg0 ;
-(void)triggerRapportSyncWithReply:(id)arg0 ;


@end


#endif