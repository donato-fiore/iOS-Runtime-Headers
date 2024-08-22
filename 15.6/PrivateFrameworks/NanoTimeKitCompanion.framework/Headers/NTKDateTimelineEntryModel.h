// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDATETIMELINEENTRYMODEL_H
#define NTKDATETIMELINEENTRYMODEL_H



#import "NTKTimelineEntryModel.h"

@interface NTKDateTimelineEntryModel : NTKTimelineEntryModel

@property (nonatomic) BOOL lunar; // ivar: _lunar


-(id)_newBezelTemplate;
-(id)_newCircularTemplateMedium:(BOOL)arg0 ;
-(id)_newExtraLargeLunarTemplate;
-(id)_newExtraLargeTemplate;
-(id)_newLargeUtilitarianTemplate;
-(id)_newModularLargeLunarTemplate;
-(id)_newModularLargeTemplate;
-(id)_newModularSmallLunarTemplate;
-(id)_newModularSmallTemplate;
-(id)_newSignatureCircularTemplate;
-(id)_newSignatureCornerTemplate;
-(id)_newSignatureExtraLargeCircularTemplate;
-(id)_newSimpleTextTemplate;
-(id)_newSmallFlatUtilitarianTemplate;
-(id)_simpleTextShortDateProvider;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif