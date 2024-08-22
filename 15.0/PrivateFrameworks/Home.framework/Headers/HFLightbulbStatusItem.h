// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFLIGHTBULBSTATUSITEM_H
#define HFLIGHTBULBSTATUSITEM_H



#import "HFAbstractBinaryStatusItem.h"

@interface HFLightbulbStatusItem : HFAbstractBinaryStatusItem



-(id)multipleAbnormalServicesFormatString;
-(id)multipleNormalServicesFormatString;
-(id)oneAbnormalServiceFormatString;
-(id)oneNormalServiceFormatString;
-(id)serviceTypes;


@end


#endif