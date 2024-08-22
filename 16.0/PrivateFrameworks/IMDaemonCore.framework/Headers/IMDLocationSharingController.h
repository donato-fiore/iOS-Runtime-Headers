// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDLOCATIONSHARINGCONTROLLER_H
#define IMDLOCATIONSHARINGCONTROLLER_H

@class FMFSession;

#import <Foundation/Foundation.h>


@interface IMDLocationSharingController : NSObject {
    FMFSession *_session;
}




+(id)sharedInstance;
+(void)_addLocationShareItemToMatchingChats:(id)arg0 handleID:(id)arg1 hasStoredItem:(BOOL)arg2 broadcastChanges:(BOOL)arg3 ;
+(void)addLocationShareItemToMatchingChats:(id)arg0 ;
-(id)init;
-(void)_forwardMappingPacket:(id)arg0 toID:(id)arg1 account:(id)arg2 ;
-(void)_generateLocationSharingItemWithHandleID:(id)arg0 direction:(NSInteger)arg1 action:(NSInteger)arg2 ;
-(void)dealloc;
-(void)didFailToHandleMappingPacket:(id)arg0 error:(id)arg1 ;
-(void)didStartAbilityToGetLocationForHandle:(id)arg0 ;
-(void)didStartSharingMyLocationWithHandle:(id)arg0 ;
-(void)didStopAbilityToGetLocationForHandle:(id)arg0 ;
-(void)didStopSharingMyLocationWithHandle:(id)arg0 ;
-(void)receivedIncomingLocationSharePacket:(id)arg0 ;
-(void)sendMappingPacket:(id)arg0 toHandle:(id)arg1 account:(id)arg2 ;


@end


#endif