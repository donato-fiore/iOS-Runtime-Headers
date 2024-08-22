// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FASETTINGSPRESETSREQUEST_H
#define FASETTINGSPRESETSREQUEST_H

@class NSString, NSNumber;


#import "FAFamilyCircleRequest.h"

@interface FASettingsPresetsRequest : FAFamilyCircleRequest {
    NSString *_altDSID;
    NSNumber *_childAge;
}




-(id)fetchPresets;
-(id)initWithChildAge:(id)arg0 ;
-(id)initWithFamilyMember:(id)arg0 ;
-(id)initWithFamilyMemberAltDSID:(id)arg0 ;
-(void)fetchPresetsWithCompletion:(id)arg0 ;


@end


#endif