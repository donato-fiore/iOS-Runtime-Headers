// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFSETSETTINGSREQUEST_H
#define AFSETSETTINGSREQUEST_H

@class NSArray;


#import "AFSiriRequest.h"

@interface AFSetSettingsRequest : AFSiriRequest

@property (nonatomic, setter=_setApplyChanges:) BOOL applyChanges; // ivar: _applyChanges
@property (copy, nonatomic, setter=_setSettings:) NSArray *settings; // ivar: _settings


+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(id)createResponseWithSettingChanges:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif