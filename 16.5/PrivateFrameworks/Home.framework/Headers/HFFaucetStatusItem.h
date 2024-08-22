// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFFAUCETSTATUSITEM_H
#define HFFAUCETSTATUSITEM_H



#import "HFAbstractPositionStatusItem.h"

@interface HFFaucetStatusItem : HFAbstractPositionStatusItem



+(id)serviceTypes;
-(id)multipleClosedServicesDescriptionString;
-(id)multipleClosedServicesFormatString;
-(id)multipleClosingServicesDescriptionString;
-(id)multipleClosingServicesFormatString;
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
-(id)oneObstructedServiceFormatString;
-(id)oneOpenServiceDescriptionString;
-(id)oneOpenServiceFormatString;
-(id)oneOpeningServiceDescriptionString;
-(id)oneOpeningServiceFormatString;
-(id)oneServiceTitleString;
-(id)oneUnknownServiceFormatString;


@end


#endif