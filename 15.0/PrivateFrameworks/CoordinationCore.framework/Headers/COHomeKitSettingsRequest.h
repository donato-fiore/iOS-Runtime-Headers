// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COHOMEKITSETTINGSREQUEST_H
#define COHOMEKITSETTINGSREQUEST_H

@class NSUUID, NSString;


#import "COMeshRequest.h"

@interface COHomeKitSettingsRequest : COMeshRequest

@property (readonly, nonatomic) NSUUID *accessoryUniqueIdentifier; // ivar: _accessoryUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath


+(BOOL)supportsSecureCoding;
+(id)acceptableResponses;
-(id)initWithAccessoryUniqueIdentifier:(id)arg0 keyPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif