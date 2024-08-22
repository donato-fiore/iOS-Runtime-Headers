// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFABSTRACTPOSITIONSTATUSITEM_H
#define HFABSTRACTPOSITIONSTATUSITEM_H



#import "HFAbstractControlStatusItem.h"

@interface HFAbstractPositionStatusItem : HFAbstractControlStatusItem



+(id)serviceType;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;
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
-(id)serviceTypes;


@end


#endif