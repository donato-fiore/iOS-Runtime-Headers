// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFCOMPANIONDEVICEINFOMUTATION_H
#define _AFCOMPANIONDEVICEINFOMUTATION_H

@class NSString, NSDictionary;
@protocol AFCompanionDeviceInfoMutating;

#import <Foundation/Foundation.h>

#import "AFCompanionDeviceInfo.h"

@interface _AFCompanionDeviceInfoMutation : NSObject <AFCompanionDeviceInfoMutating>

 {
    AFCompanionDeviceInfo *_base;
    NSString *_assistantID;
    NSString *_speechID;
    NSString *_idsIdentifier;
    NSString *_productPrefix;
    NSString *_aceHost;
    NSDictionary *_syncMetadata;
    BOOL _syncMetadataCapability;
    BOOL _peerToPeerHandoffCapability;
    BOOL _muxSupportCapability;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getMuxSupportCapability;
-(BOOL)getPeerToPeerHandoffCapability;
-(BOOL)getSyncMetadataCapability;
-(BOOL)isDirty;
-(id)getAceHost;
-(id)getAssistantID;
-(id)getIdsIdentifier;
-(id)getProductPrefix;
-(id)getSpeechID;
-(id)getSyncMetadata;
-(id)initWithBase:(id)arg0 ;
-(void)setAceHost:(id)arg0 ;
-(void)setAssistantID:(id)arg0 ;
-(void)setIdsIdentifier:(id)arg0 ;
-(void)setMuxSupportCapability:(BOOL)arg0 ;
-(void)setPeerToPeerHandoffCapability:(BOOL)arg0 ;
-(void)setProductPrefix:(id)arg0 ;
-(void)setSpeechID:(id)arg0 ;
-(void)setSyncMetadata:(id)arg0 ;
-(void)setSyncMetadataCapability:(BOOL)arg0 ;


@end


#endif