// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANCOMPANIONCONNECTION_H
#define ANCOMPANIONCONNECTION_H

@class RPCompanionLinkClient;
@protocol OS_dispatch_queue, ANCompanionConnectionDelegate;

#import <Foundation/Foundation.h>


@interface ANCompanionConnection : NSObject {
    NSObject<OS_dispatch_queue> *_rapportQueue;
}


@property (readonly, nonatomic) RPCompanionLinkClient *companionLinkClient; // ivar: _companionLinkClient
@property (weak, nonatomic) NSObject<ANCompanionConnectionDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)_registerForEvents;
-(void)_setupLink;
-(void)_tearDownLink;
-(void)broadcastAnnouncementPlayed:(id)arg0 ;


@end


#endif