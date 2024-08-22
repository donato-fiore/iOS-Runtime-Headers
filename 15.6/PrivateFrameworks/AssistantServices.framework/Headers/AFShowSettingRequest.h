// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSHOWSETTINGREQUEST_H
#define AFSHOWSETTINGREQUEST_H



#import "AFSiriRequest.h"

@interface AFShowSettingRequest : AFSiriRequest {
    NSInteger _settingType;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)settingType;
-(id)_initWithSettingType:(NSInteger)arg0 ;
-(id)createResponse;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif