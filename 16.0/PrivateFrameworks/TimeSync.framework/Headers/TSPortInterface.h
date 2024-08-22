// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPORTINTERFACE_H
#define TSPORTINTERFACE_H

@class NSString;
@protocol TSgPTPNetworkPortClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSgPTPPort.h"

@interface TSPortInterface : NSObject <TSgPTPNetworkPortClient>

 {
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    *unk _macLookupTimeoutCallback;
    *void _macLookupTimeoutRefcon;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSgPTPPort *port; // ivar: _port
@property (readonly) Class superclass;


-(id)initWithgPTPPort:(id)arg0 onClockIdentifier:(NSUInteger)arg1 ;
-(void)didTimeoutOnMACLookupForPort:(id)arg0 ;
-(void)setMACLookupTimeoutCallback:(*unk)arg0 refcon:(*void)arg1 ;


@end


#endif