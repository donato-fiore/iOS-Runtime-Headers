// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANLOCALPLAYBACKSESSIONINTERFACEDELEGATEPROXY_H
#define ANLOCALPLAYBACKSESSIONINTERFACEDELEGATEPROXY_H

@class NSString;
@protocol ANLocalPlaybackSessionServiceInterfaceDelegate;

#import <Foundation/Foundation.h>


@interface ANLocalPlaybackSessionInterfaceDelegateProxy : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANLocalPlaybackSessionServiceInterfaceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)announcementsStateUpdate:(NSUInteger)arg0 ;
-(void)announcementsWillStartPlaying:(NSUInteger)arg0 ;
-(void)didReceiveAnnouncement:(id)arg0 forGroupID:(id)arg1 ;


@end


#endif