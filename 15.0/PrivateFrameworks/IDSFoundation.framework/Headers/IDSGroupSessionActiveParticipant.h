// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSGROUPSESSIONACTIVEPARTICIPANT_H
#define IDSGROUPSESSIONACTIVEPARTICIPANT_H

@class NSUUID, NSData, NSString;

#import <Foundation/Foundation.h>


@interface IDSGroupSessionActiveParticipant : NSObject

@property (readonly, nonatomic) NSUUID *groupUUID; // ivar: _groupUUID
@property (readonly, nonatomic) BOOL isKnown; // ivar: _isKnown
@property (readonly, nonatomic) NSUInteger participantIdentifier; // ivar: _participantIdentifier
@property (readonly, nonatomic) NSData *participantPushToken; // ivar: _participantPushToken
@property (readonly, nonatomic) NSString *participantURI; // ivar: _participantURI


-(id)debugDescription;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithGroupUUID:(id)arg0 participantIdentifier:(NSUInteger)arg1 isKnown:(BOOL)arg2 participantURI:(id)arg3 pushToken:(id)arg4 ;


@end


#endif