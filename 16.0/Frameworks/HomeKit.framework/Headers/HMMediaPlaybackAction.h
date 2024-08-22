// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIAPLAYBACKACTION_H
#define HMMEDIAPLAYBACKACTION_H

@class NSString, NSSet, MPPlaybackArchive, NSUUID, NSNumber;
@protocol NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying;


#import "HMAction.h"

@interface HMMediaPlaybackAction : HMAction <NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *mediaProfiles; // ivar: _mediaProfiles
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive; // ivar: _playbackArchive
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (copy, nonatomic) NSNumber *volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg0 home:(id)arg1 ;
+(id)mediaPlaybackActionWithProtoBuf:(id)arg0 home:(id)arg1 ;
-(BOOL)_handleUpdates:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)_updateWithSerializedAction:(id)arg0 home:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)type;
-(id)_serializeForAdd;
-(id)accessoryProfiles;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProtoBuf;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaProfiles:(id)arg0 playbackState:(NSInteger)arg1 volume:(id)arg2 playbackArchive:(id)arg3 ;
-(id)initWithMediaProfiles:(id)arg0 playbackState:(NSInteger)arg1 volume:(id)arg2 playbackArchive:(id)arg3 uuid:(id)arg4 ;
-(id)initWithPlaybackAction:(id)arg0 uuid:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)__configureWithContext:(id)arg0 actionSet:(id)arg1 ;
-(void)_updateWithAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithAction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif