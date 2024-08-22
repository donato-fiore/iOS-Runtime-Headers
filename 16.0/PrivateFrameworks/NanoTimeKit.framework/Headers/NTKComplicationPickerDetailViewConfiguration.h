// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOMPLICATIONPICKERDETAILVIEWCONFIGURATION_H
#define NTKCOMPLICATIONPICKERDETAILVIEWCONFIGURATION_H

@class NSString;


#import "NTKComplicationPickerBaseViewConfiguration.h"
#import "NTKFaceSlotComplicationDetailListProvider.h"

@interface NTKComplicationPickerDetailViewConfiguration : NTKComplicationPickerBaseViewConfiguration

@property (readonly, nonatomic) NTKFaceSlotComplicationDetailListProvider *listProvider;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithDetailListProvider:(id)arg0 title:(id)arg1 ;


@end


#endif