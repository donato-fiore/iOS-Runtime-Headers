// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCSHARINGGROUP_H
#define KCSHARINGGROUP_H

@class NSDictionary, NSString, NSArray, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "KCSharingParticipant.h"

@interface KCSharingGroup : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *JSONObject;
@property (readonly, nonatomic) KCSharingParticipant *currentUserParticipant;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSInteger joinState;
@property (readonly, copy, nonatomic) NSString *longDescription;
@property (readonly, nonatomic) KCSharingParticipant *ownerParticipant;
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSURL *shareURL; // ivar: _shareURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupID:(id)arg0 participants:(id)arg1 displayName:(id)arg2 shareURL:(id)arg3 ;
-(id)initWithParticipants:(id)arg0 displayName:(id)arg1 ;
-(void)addParticipant:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeParticipant:(id)arg0 ;


@end


#endif