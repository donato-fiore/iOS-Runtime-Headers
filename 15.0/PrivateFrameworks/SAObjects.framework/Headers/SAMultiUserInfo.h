// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMULTIUSERINFO_H
#define SAMULTIUSERINFO_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAMultiUserInfo : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *homeMembers;
@property (copy, nonatomic) NSArray *multiUserPitchComposition;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic) BOOL voiceProfilesAreInFlight;


+(id)multiUserInfo;
+(id)multiUserInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif