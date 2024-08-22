// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFHOMEACCESSORYINFOMUTATION_H
#define _AFHOMEACCESSORYINFOMUTATION_H

@class NSUUID, NSString;
@protocol AFHomeAccessoryInfoMutating;

#import <Foundation/Foundation.h>

#import "AFHomeAccessoryInfo.h"

@interface _AFHomeAccessoryInfoMutation : NSObject <AFHomeAccessoryInfoMutating>

 {
    AFHomeAccessoryInfo *_base;
    NSUUID *_uniqueIdentifier;
    NSUUID *_loggingUniqueIdentifier;
    NSString *_name;
    NSString *_model;
    NSString *_roomName;
    NSString *_assistantIdentifier;
    BOOL _isSpeaker;
    BOOL _hasActiveThirdPartyMusicSubscription;
    NSString *_manufacturer;
    NSString *_categoryType;
    NSInteger _schemaCategoryType;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getHasActiveThirdPartyMusicSubscription;
-(BOOL)getIsSpeaker;
-(BOOL)isDirty;
-(NSInteger)getSchemaCategoryType;
-(id)getAssistantIdentifier;
-(id)getCategoryType;
-(id)getLoggingUniqueIdentifier;
-(id)getManufacturer;
-(id)getModel;
-(id)getName;
-(id)getRoomName;
-(id)getUniqueIdentifier;
-(id)initWithBase:(id)arg0 ;
-(void)setAssistantIdentifier:(id)arg0 ;
-(void)setCategoryType:(id)arg0 ;
-(void)setHasActiveThirdPartyMusicSubscription:(BOOL)arg0 ;
-(void)setIsSpeaker:(BOOL)arg0 ;
-(void)setLoggingUniqueIdentifier:(id)arg0 ;
-(void)setManufacturer:(id)arg0 ;
-(void)setModel:(id)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setRoomName:(id)arg0 ;
-(void)setSchemaCategoryType:(NSInteger)arg0 ;
-(void)setUniqueIdentifier:(id)arg0 ;


@end


#endif