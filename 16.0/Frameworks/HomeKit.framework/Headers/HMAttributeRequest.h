// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMATTRIBUTEREQUEST_H
#define HMATTRIBUTEREQUEST_H

@class NSString;


#import "HMRequestBase.h"
#import "HMAccessoryProfile.h"

@interface HMAttributeRequest : HMRequestBase

@property (readonly, nonatomic) HMAccessoryProfile *accessoryProfile; // ivar: _accessoryProfile
@property (readonly, nonatomic) NSString *attribute; // ivar: _attribute


-(id)initWithAccessoryProfile:(id)arg0 attribute:(id)arg1 ;


@end


#endif