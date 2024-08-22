// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCORNERCOMPLICATIONCONFIGURATION_H
#define NTKCORNERCOMPLICATIONCONFIGURATION_H



#import "NTKFaceComplicationConfiguration.h"

@interface NTKCornerComplicationConfiguration : NTKFaceComplicationConfiguration {
    NSUInteger _topLeftComplication;
    NSUInteger _topRightComplication;
    NSUInteger _bottomLeftComplication;
    NSUInteger _bottomRightComplication;
}




-(BOOL)complicationExistenceInvalidatesSnapshot;
-(id)complicationSlotDescriptors;
-(id)defaultSelectedComplicationSlotForDevice:(id)arg0 ;
-(id)init;
-(id)initWithTopLeftComplication:(NSUInteger)arg0 topRightComplication:(NSUInteger)arg1 bottomLeftComplication:(NSUInteger)arg2 bottomRightComplication:(NSUInteger)arg3 ;
-(id)orderedComplicationSlots;
-(id)richComplicationSlotsForDevice:(id)arg0 ;


@end


#endif