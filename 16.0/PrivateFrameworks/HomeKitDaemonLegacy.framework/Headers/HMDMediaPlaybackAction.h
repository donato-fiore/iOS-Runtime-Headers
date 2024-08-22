// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAPLAYBACKACTION_H
#define HMDMEDIAPLAYBACKACTION_H

@class NSString, NSSet, MPPlaybackArchive, NSNumber;
@protocol NSSecureCoding, HMDBackingStoreObjectProtocol;


#import "HMDAction.h"
#import "HMDMediaPlaybackActionAsCharacteristicWriteRequests.h"
#import "HMDHome.h"

@interface HMDMediaPlaybackAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol>



@property (readonly, copy) HMDMediaPlaybackActionAsCharacteristicWriteRequests *convertedCharacteristicWriteRequests;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL encodePlaybackArchiveForExecution; // ivar: _encodePlaybackArchiveForExecution
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (copy, nonatomic) NSSet *mediaProfiles; // ivar: _mediaProfiles
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive; // ivar: _playbackArchive
@property (retain, nonatomic) NSSet *profileUUIDs; // ivar: _profileUUIDs
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *volume; // ivar: _volume


+(BOOL)isPlaybackActionValidWithProfiles:(id)arg0 state:(NSInteger)arg1 volume:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
+(id)logCategory;
-(BOOL)isAssociatedWithAccessory:(id)arg0 ;
-(BOOL)isUnsecuringAction;
-(Class)modelClass;
-(NSUInteger)type;
-(id)associatedAccessories;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelObject:(id)arg0 parent:(id)arg1 error:(*id)arg2 ;
-(id)initWithUUID:(id)arg0 mediaProfiles:(id)arg1 playbackState:(NSInteger)arg2 volume:(id)arg3 playbackArchive:(id)arg4 actionSet:(id)arg5 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)modelObjectWithUpdatedMediaProfiles:(id)arg0 ;
-(id)validate;
-(void)_processPlaybackActionModelUpdated:(id)arg0 message:(id)arg1 ;
-(void)configureWithHome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithSource:(NSUInteger)arg0 clientName:(id)arg1 completionHandler:(id)arg2 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif