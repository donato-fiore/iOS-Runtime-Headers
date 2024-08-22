// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFGARAGEDOOROPENERSTATUSITEM_H
#define HFGARAGEDOOROPENERSTATUSITEM_H



#import "HFAbstractPositionStatusItem.h"

@interface HFGarageDoorOpenerStatusItem : HFAbstractPositionStatusItem



+(id)serviceType;
-(id)multipleClosedServicesFormatString;
-(id)multipleClosingServicesFormatString;
-(id)multipleObstructedServicesFormatString;
-(id)multipleOpenServicesFormatString;
-(id)multipleOpeningServicesFormatString;
-(id)multipleUnknownServicesFormatString;
-(id)oneClosedServiceFormatString;
-(id)oneClosingServiceFormatString;
-(id)oneObstructedServiceFormatString;
-(id)oneOpenServiceFormatString;
-(id)oneOpeningServiceFormatString;
-(id)oneUnknownServiceFormatString;


@end


#endif