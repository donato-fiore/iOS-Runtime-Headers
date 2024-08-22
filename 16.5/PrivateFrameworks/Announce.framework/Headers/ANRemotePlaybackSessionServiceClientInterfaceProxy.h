// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANREMOTEPLAYBACKSESSIONSERVICECLIENTINTERFACEPROXY_H
#define ANREMOTEPLAYBACKSESSIONSERVICECLIENTINTERFACEPROXY_H

@class NSString;
@protocol ANRemotePlaybackSessionServiceClientInterface;

#import <Foundation/Foundation.h>


@interface ANRemotePlaybackSessionServiceClientInterfaceProxy : NSObject <ANRemotePlaybackSessionServiceClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANRemotePlaybackSessionServiceClientInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didReceiveAnnouncement:(id)arg0 forGroupID:(id)arg1 ;
-(void)didUpdateAnnouncements:(id)arg0 forGroupID:(id)arg1 ;


@end


#endif