// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHSHAREPARTICIPANT_H
#define PHSHAREPARTICIPANT_H

@class NSString, NSPersonNameComponents;


#import "PHObject.h"

@interface PHShareParticipant : PHObject

@property (readonly, nonatomic) short acceptanceStatus; // ivar: _acceptanceStatus
@property (readonly, copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, nonatomic) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (readonly, nonatomic) short permission; // ivar: _permission
@property (readonly, copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) unsigned short role; // ivar: _role


+(id)entityKeyMap;
+(id)fetchContributorForAsset:(id)arg0 options:(id)arg1 ;
+(id)fetchParticipantsInShare:(id)arg0 options:(id)arg1 ;
+(id)fetchParticipantsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)identifierCode;
+(id)localIdentifierWithUUID:(id)arg0 ;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
+(void)queryParticipantsWithEmails:(id)arg0 phoneNumbers:(id)arg1 photoLibrary:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)changeRequestClass;
-(NSUInteger)hash;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;


@end


#endif