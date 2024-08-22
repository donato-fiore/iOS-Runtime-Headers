// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHIPCONNECTEDECOSYSTEMSCHANGEDBULLETIN_H
#define HMDCHIPCONNECTEDECOSYSTEMSCHANGEDBULLETIN_H

@class HMFObject, NSString, NSDate, NSDictionary;



@interface HMDCHIPConnectedEcosystemsChangedBulletin : HMFObject

@property (readonly, copy) NSString *body; // ivar: _body
@property (readonly, copy) NSDate *dateOfOccurrence; // ivar: _dateOfOccurrence
@property (readonly, copy) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (readonly, getter=isTimeSensitive) BOOL timeSensitive; // ivar: _timeSensitive
@property (readonly, copy) NSString *title; // ivar: _title
@property (readonly, copy) NSDictionary *userInfo; // ivar: _userInfo


+(id)localizedBodyForAddedEcosystemHomeName:(id)arg0 accessoryName:(id)arg1 accessoryCategory:(id)arg2 ;
+(id)localizedTitleForAddedEcosystemName:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithAddedPairing:(id)arg0 accessory:(id)arg1 ;
-(id)initWithTitle:(id)arg0 body:(id)arg1 threadIdentifier:(id)arg2 dateOfOccurrence:(id)arg3 userInfo:(id)arg4 isTimeSensitive:(BOOL)arg5 ;


@end


#endif