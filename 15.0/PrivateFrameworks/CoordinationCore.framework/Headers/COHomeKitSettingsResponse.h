// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COHOMEKITSETTINGSRESPONSE_H
#define COHOMEKITSETTINGSRESPONSE_H

@class NSArray;


#import "COMeshResponse.h"

@interface COHomeKitSettingsResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *settings; // ivar: _settings


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithAccessorySettings:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif