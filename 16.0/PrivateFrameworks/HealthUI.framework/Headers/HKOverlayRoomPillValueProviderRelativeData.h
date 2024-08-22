// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKOVERLAYROOMPILLVALUEPROVIDERRELATIVEDATA_H
#define HKOVERLAYROOMPILLVALUEPROVIDERRELATIVEDATA_H

@protocol HKOverlayPillValueProviding;

#import <Foundation/Foundation.h>


@interface HKOverlayRoomPillValueProviderRelativeData : NSObject <HKOverlayPillValueProviding>





-(id)_formattedValueFromChartPoints:(id)arg0 displayType:(id)arg1 unitPreferenceController:(id)arg2 ;
-(id)_unitStringForValueString:(id)arg0 displayType:(id)arg1 unitPreferenceController:(id)arg2 ;
-(id)valueFromChartPoints:(id)arg0 unit:(id)arg1 displayType:(id)arg2 unitPreferenceController:(id)arg3 ;


@end


#endif