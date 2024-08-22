// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKBATTERYTIMELINEENTRYMODEL_H
#define NTKBATTERYTIMELINEENTRYMODEL_H



#import "NTKTimelineEntryModel.h"

@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel

@property (nonatomic) float level; // ivar: _level
@property (nonatomic) NSInteger state; // ivar: _state


-(id)_graphicExtraLargeCircularTemplate;
-(id)_newBatteryTemplateForFamily:(NSInteger)arg0 ;
-(id)_newUtilitarianLargeTemplate;
-(id)_newUtilitarianSmallFlatTemplate;
-(id)_ringTextProvider;
-(id)_signatureBezelTemplate;
-(id)_signatureCircularTemplate;
-(id)_signatureCornerTemplate;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif