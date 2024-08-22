// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMEDIAPLAYBACKACTION_H
#define HMMEDIAPLAYBACKACTION_H

@class NSSet, NSNumber, MPPlaybackArchive;
@protocol NSCopying, NSMutableCopying;


#import "HMAction.h"

@interface HMMediaPlaybackAction : HMAction <NSCopying, NSMutableCopying>

 {
    os_unfair_lock_s _lock;
    NSSet *_mediaProfiles;
    NSInteger _state;
    NSNumber *_volume;
    MPPlaybackArchive *_playbackArchive;
}


@property (readonly, copy, nonatomic) NSSet *mediaProfiles;
@property (readonly, nonatomic) MPPlaybackArchive *playbackArchive;
@property (readonly, nonatomic) NSInteger state;
@property (readonly, copy, nonatomic) NSNumber *volume;


+(BOOL)supportsSecureCoding;
+(id)actionWithProtoBuf:(id)arg0 home:(id)arg1 ;
-(BOOL)_handleUpdates:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)_updateWithSerializedAction:(id)arg0 home:(id)arg1 ;
-(BOOL)isAffectedByEndEvents;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSUInteger)type;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProtoBuf;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 home:(id)arg1 ;
-(id)initWithMediaProfiles:(id)arg0 playbackState:(NSInteger)arg1 volume:(id)arg2 playbackArchive:(id)arg3 ;
-(id)initWithUUID:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)__configureWithContext:(id)arg0 actionSet:(id)arg1 ;
-(void)updateWithAction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif