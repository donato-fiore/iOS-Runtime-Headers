// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPLICATIONPICKERTOPLEVELVIEWCONFIGURATION_H
#define NTKCOMPLICATIONPICKERTOPLEVELVIEWCONFIGURATION_H



#import "NTKComplicationPickerBaseViewConfiguration.h"
#import "NTKFaceSlotComplicationTopLevelListProvider.h"

@interface NTKComplicationPickerTopLevelViewConfiguration : NTKComplicationPickerBaseViewConfiguration

@property (readonly, nonatomic) NTKFaceSlotComplicationTopLevelListProvider *listProvider;


-(id)initWithTopLevelListProvider:(id)arg0 ;


@end


#endif