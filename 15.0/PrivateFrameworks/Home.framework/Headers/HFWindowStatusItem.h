// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFWINDOWSTATUSITEM_H
#define HFWINDOWSTATUSITEM_H



#import "HFAbstractPositionStatusItem.h"

@interface HFWindowStatusItem : HFAbstractPositionStatusItem



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