// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFGETSETTINGSRESPONSE_H
#define AFGETSETTINGSRESPONSE_H

@class NSArray;


#import "AFSiriResponse.h"

@interface AFGetSettingsResponse : AFSiriResponse

@property (copy, nonatomic) NSArray *settings; // ivar: _settings


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif