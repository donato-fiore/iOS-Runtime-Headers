// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFSETSETTINGSRESPONSE_H
#define AFSETSETTINGSRESPONSE_H

@class NSArray;


#import "AFSiriResponse.h"

@interface AFSetSettingsResponse : AFSiriResponse {
    NSArray *_settingChanges;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithRequest:(id)arg0 settingChanges:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)settingChanges;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif