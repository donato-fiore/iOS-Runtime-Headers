// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFABSTRACTPOSITIONSTATUSITEM_H
#define HFABSTRACTPOSITIONSTATUSITEM_H



#import "HFAbstractControlStatusItem.h"

@interface HFAbstractPositionStatusItem : HFAbstractControlStatusItem



-(id)_characteristicsToReadForCharacteristicTypes:(id)arg0 inServices:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;
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