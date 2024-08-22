// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFABSTRACTBINARYSTATUSITEM_H
#define HFABSTRACTBINARYSTATUSITEM_H



#import "HFAbstractControlStatusItem.h"

@interface HFAbstractBinaryStatusItem : HFAbstractControlStatusItem



-(id)_shortTitleForTitle:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;
-(id)multipleAbnormalServicesDescriptionString;
-(id)multipleAbnormalServicesFormatString;
-(id)multipleNormalServicesDescriptionString;
-(id)multipleNormalServicesFormatString;
-(id)multipleUnknownServicesFormatString;
-(id)oneAbnormalServiceDescriptionString;
-(id)oneAbnormalServiceFormatString;
-(id)oneNormalServiceDescriptionString;
-(id)oneNormalServiceFormatString;
-(id)oneUnknownServiceFormatString;


@end


#endif