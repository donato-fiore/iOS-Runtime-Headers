// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENGROUP_H
#define ENGROUP_H

@class NSSet, NSArray, NSData;
@protocol NSSecureCoding, ENCypher;

#import <Foundation/Foundation.h>

#import "ENGroupID.h"
#import "_ENGroupInfo.h"

@interface ENGroup : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<ENCypher> *cypher; // ivar: _cypher
@property (readonly, nonatomic) NSSet *destinations;
@property (readonly, nonatomic) ENGroupID *groupID; // ivar: _groupID
@property (retain, nonatomic) _ENGroupInfo *groupInfo; // ivar: _groupInfo
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSData *sharedApplicationData;


+(BOOL)supportsSecureCoding;
+(id)sortedGroupsFromGroups:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)accountIdentity;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupInfo:(id)arg0 groupID:(id)arg1 cypher:(id)arg2 ;
-(id)signAndConcealData:(id)arg0 cypherIdentifier:(*id)arg1 error:(*id)arg2 ;
-(id)verifyAndRevealData:(id)arg0 sendingDevice:(id)arg1 cypherIdentifier:(id)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif