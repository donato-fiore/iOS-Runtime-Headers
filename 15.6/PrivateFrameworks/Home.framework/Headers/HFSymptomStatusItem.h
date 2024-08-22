// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSYMPTOMSTATUSITEM_H
#define HFSYMPTOMSTATUSITEM_H

@class HMSymptom;


#import "HFStatusItem.h"

@interface HFSymptomStatusItem : HFStatusItem

@property (readonly, nonatomic) HMSymptom *symptom; // ivar: _symptom


-(id)_subclass_updateWithOptions:(id)arg0 ;


@end


#endif