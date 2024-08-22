// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLSHARE_H
#define CPLSHARE_H

@class NSURL, NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CPLShareParticipant.h"

@interface CPLShare : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) CPLShareParticipant *currentUserParticipant;
@property (readonly, nonatomic) CPLShareParticipant *owner;
@property (readonly, nonatomic) BOOL ownerIsCurrentUser;
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (nonatomic) NSInteger publicPermission; // ivar: _publicPermission


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif