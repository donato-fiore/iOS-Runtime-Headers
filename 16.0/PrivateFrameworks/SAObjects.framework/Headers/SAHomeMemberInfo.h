// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAHOMEMEMBERINFO_H
#define SAHOMEMEMBERINFO_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAHomeMemberSettings.h"

@interface SAHomeMemberInfo : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSString *companionAssistantId;
@property (copy, nonatomic) NSString *companionSpeechId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *enrollmentName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAHomeMemberSettings *homeMemberSettings;
@property (copy, nonatomic) NSString *lastVisitedAceHost;
@property (copy, nonatomic) NSString *loggableCompanionAssistantId;
@property (copy, nonatomic) NSString *loggableMultiUserSharedUserId;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (copy, nonatomic) NSString *sharedUserId;
@property (copy, nonatomic) NSString *speechId;
@property (readonly) Class superclass;


+(id)homeMemberInfo;
+(id)homeMemberInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif