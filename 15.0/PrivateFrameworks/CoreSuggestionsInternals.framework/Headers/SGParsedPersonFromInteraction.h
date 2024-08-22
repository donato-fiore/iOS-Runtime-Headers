// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGPARSEDPERSONFROMINTERACTION_H
#define SGPARSEDPERSONFROMINTERACTION_H

@class INPersonHandle, NSString, NSDate, NSPersonNameComponents;

#import <Foundation/Foundation.h>

#import "SGSocialProfileDetails.h"

@interface SGParsedPersonFromInteraction : NSObject {
    INPersonHandle *_handle;
}


@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *email; // ivar: _email
@property (readonly, nonatomic) NSString *groupId; // ivar: _groupId
@property (readonly, nonatomic) NSString *interactionIdentifier; // ivar: _interactionIdentifier
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (readonly, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) SGSocialProfileDetails *socialProfile; // ivar: _socialProfile


+(id)_peopleFromInteraction:(id)arg0 ;
+(id)intentClassWhitelist;
+(id)parseInteraction:(id)arg0 bundleId:(id)arg1 ;
-(id)initWithPerson:(id)arg0 bundleId:(id)arg1 interactionIdentifier:(id)arg2 groupId:(id)arg3 date:(id)arg4 ;
-(id)pipelineEntity;
-(void)_harvestEmail:(id)arg0 ;
-(void)_harvestPerson:(id)arg0 handle:(id)arg1 suggestionType:(NSInteger)arg2 bundleId:(id)arg3 ;
-(void)_harvestPhoneNumber:(id)arg0 ;
-(void)_harvestSocialProfile:(id)arg0 handle:(id)arg1 bundleId:(id)arg2 ;
-(void)grabNameIfNeededFromContactStore:(id)arg0 ;


@end


#endif