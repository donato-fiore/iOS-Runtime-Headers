// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFOUTLETSTATUSITEM_H
#define HFOUTLETSTATUSITEM_H



#import "HFAbstractBinaryStatusItem.h"

@interface HFOutletStatusItem : HFAbstractBinaryStatusItem



-(id)multipleAbnormalServicesFormatString;
-(id)multipleNormalServicesFormatString;
-(id)oneAbnormalServiceFormatString;
-(id)oneNormalServiceFormatString;
-(id)serviceTypes;


@end


#endif