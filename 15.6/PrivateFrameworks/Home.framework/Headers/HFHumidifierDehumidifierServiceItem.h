// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFHUMIDIFIERDEHUMIDIFIERSERVICEITEM_H
#define HFHUMIDIFIERDEHUMIDIFIERSERVICEITEM_H



#import "HFServiceItem.h"

@interface HFHumidifierDehumidifierServiceItem : HFServiceItem



+(id)supportedServiceTypes;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)createControlItems;
-(void)_formatDescription:(*id)arg0 controlDescription:(*id)arg1 optionalDescriptions:(*id)arg2 forResponse:(id)arg3 ;


@end


#endif