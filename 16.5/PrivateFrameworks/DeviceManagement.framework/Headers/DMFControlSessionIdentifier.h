// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFCONTROLSESSIONIDENTIFIER_H
#define DMFCONTROLSESSIONIDENTIFIER_H



#import "DMFControlGroupIdentifier.h"

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier

@property (readonly, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (readonly, nonatomic) unsigned int leaderIP; // ivar: _leaderIP
@property (readonly, nonatomic) unsigned short port; // ivar: _port


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToControlSessionIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrganizationUUID:(id)arg0 groupID:(unsigned short)arg1 ;
-(id)initWithOrganizationUUID:(id)arg0 groupID:(unsigned short)arg1 leaderIP:(unsigned int)arg2 ;
-(id)initWithOrganizationUUID:(id)arg0 groupID:(unsigned short)arg1 leaderIP:(unsigned int)arg2 port:(unsigned short)arg3 ;
-(id)initWithString:(id)arg0 ;
-(id)stringValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif