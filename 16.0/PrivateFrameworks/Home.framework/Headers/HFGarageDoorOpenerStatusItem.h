// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFGARAGEDOOROPENERSTATUSITEM_H
#define HFGARAGEDOOROPENERSTATUSITEM_H



#import "HFAbstractPositionStatusItem.h"

@interface HFGarageDoorOpenerStatusItem : HFAbstractPositionStatusItem



+(id)serviceTypes;
-(id)multipleClosedServicesDescriptionString;
-(id)multipleClosedServicesFormatString;
-(id)multipleClosingServicesDescriptionString;
-(id)multipleClosingServicesFormatString;
-(id)multipleObstructedServicesDescriptionString;
-(id)multipleObstructedServicesFormatString;
-(id)multipleOpenServicesDescriptionString;
-(id)multipleOpenServicesFormatString;
-(id)multipleOpeningServicesDescriptionString;
-(id)multipleOpeningServicesFormatString;
-(id)multipleServiceTitleFormatString;
-(id)multipleUnknownServicesFormatString;
-(id)oneClosedServiceDescriptionString;
-(id)oneClosedServiceFormatString;
-(id)oneClosingServiceDescriptionString;
-(id)oneClosingServiceFormatString;
-(id)oneObstructedServiceDescriptionString;
-(id)oneObstructedServiceFormatString;
-(id)oneOpenServiceDescriptionString;
-(id)oneOpenServiceFormatString;
-(id)oneOpeningServiceDescriptionString;
-(id)oneOpeningServiceFormatString;
-(id)oneServiceTitleString;
-(id)oneUnknownServiceFormatString;


@end


#endif