// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAMULTIUSERSTATE_H
#define SISCHEMAMULTIUSERSTATE_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaMultiUserState : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *enrolledUsers; // ivar: _enrolledUsers
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)enrolledUsersAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addEnrolledUsers:(id)arg0 ;
-(void)clearEnrolledUsers;
-(void)writeTo:(id)arg0 ;


@end


#endif