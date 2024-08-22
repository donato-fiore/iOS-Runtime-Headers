// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFVALVESERVICEITEM_H
#define HFVALVESERVICEITEM_H



#import "HFServiceItem.h"

@interface HFValveServiceItem : HFServiceItem



+(id)supportedServiceTypes;
-(BOOL)containsActions;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)createControlItems;
-(id)currentStateActionBuildersForHome:(id)arg0 ;


@end


#endif