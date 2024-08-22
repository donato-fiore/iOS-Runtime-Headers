// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TISETTINGVALUEDESCRIPTOR_H
#define TISETTINGVALUEDESCRIPTOR_H

@class NSString;


#import "TIMetricDescriptor.h"

@interface TISettingValueDescriptor : TIMetricDescriptor

@property (retain) NSString *settingName; // ivar: _settingName


+(id)settingValueDescriptorWithMetricName:(id)arg0 settingName:(id)arg1 ;
-(id)initWithMetricName:(id)arg0 settingName:(id)arg1 ;


@end


#endif