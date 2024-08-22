// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFAIRPURIFIERSTATUSITEM_H
#define HFAIRPURIFIERSTATUSITEM_H



#import "HFAbstractBinaryStatusItem.h"

@interface HFAirPurifierStatusItem : HFAbstractBinaryStatusItem



+(id)serviceTypes;
-(id)multipleAbnormalServicesDescriptionString;
-(id)multipleAbnormalServicesFormatString;
-(id)multipleNormalServicesDescriptionString;
-(id)multipleNormalServicesFormatString;
-(id)oneAbnormalServiceDescriptionString;
-(id)oneAbnormalServiceFormatString;
-(id)oneNormalServiceDescriptionString;
-(id)oneNormalServiceFormatString;


@end


#endif