// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMHOMEINVITATION_H
#define HMHOMEINVITATION_H

@class NSString, NSDate, NSURL, NSUUID;
@protocol HMObjectMerge, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMHome.h"
#import "HMHomeInvitationData.h"

@interface HMHomeInvitation : NSObject <HMObjectMerge, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSURL *homeObjectURL; // ivar: _homeObjectURL
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) HMHomeInvitationData *invitationData; // ivar: _invitationData
@property (readonly, nonatomic) NSInteger invitationState;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 invitationData:(id)arg1 ;
-(id)initWithInvitationData:(id)arg0 home:(id)arg1 ;
-(void)_updateInvitationState:(NSInteger)arg0 ;
-(void)cancelInviteWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif