// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTELEVISIONSTATUSITEM_H
#define HFTELEVISIONSTATUSITEM_H



#import "HFAbstractBinaryStatusItem.h"

@interface HFTelevisionStatusItem : HFAbstractBinaryStatusItem



+(id)serviceTypes;
-(id)_subclass_updateWithOptions:(id)arg0 ;
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