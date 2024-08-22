// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUSERPROFILEITEM_H
#define SAUSERPROFILEITEM_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUserProfileItem : AceObject <SAAceSerializable>



@property (nonatomic) BOOL activeProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fullName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (readonly) Class superclass;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif