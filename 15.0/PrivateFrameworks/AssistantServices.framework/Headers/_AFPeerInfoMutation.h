// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFPEERINFOMUTATION_H
#define _AFPEERINFOMUTATION_H

@class NSString;
@protocol AFPeerInfoMutating;

#import <Foundation/Foundation.h>

#import "AFPeerInfo.h"

@interface _AFPeerInfoMutation : NSObject <AFPeerInfoMutating>

 {
    AFPeerInfo *_baseModel;
    BOOL _isDeviceOwnedByCurrentUser;
    NSString *_assistantIdentifier;
    NSString *_sharedUserIdentifier;
    NSString *_idsIdentifier;
    NSString *_idsDeviceUniqueIdentifier;
    NSString *_rapportEffectiveIdentifier;
    NSString *_homeKitAccessoryIdentifier;
    NSString *_mediaSystemIdentifier;
    NSString *_mediaRouteIdentifier;
    BOOL _isCommunalDevice;
    NSString *_roomName;
    NSString *_name;
    NSString *_productType;
    NSString *_buildVersion;
    NSString *_userInterfaceIdiom;
    NSString *_aceVersion;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setAceVersion:(id)arg0 ;
-(void)setAssistantIdentifier:(id)arg0 ;
-(void)setBuildVersion:(id)arg0 ;
-(void)setHomeKitAccessoryIdentifier:(id)arg0 ;
-(void)setIdsDeviceUniqueIdentifier:(id)arg0 ;
-(void)setIdsIdentifier:(id)arg0 ;
-(void)setIsCommunalDevice:(BOOL)arg0 ;
-(void)setIsDeviceOwnedByCurrentUser:(BOOL)arg0 ;
-(void)setMediaRouteIdentifier:(id)arg0 ;
-(void)setMediaSystemIdentifier:(id)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setProductType:(id)arg0 ;
-(void)setRapportEffectiveIdentifier:(id)arg0 ;
-(void)setRoomName:(id)arg0 ;
-(void)setSharedUserIdentifier:(id)arg0 ;
-(void)setUserInterfaceIdiom:(id)arg0 ;


@end


#endif