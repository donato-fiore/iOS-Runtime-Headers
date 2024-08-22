// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKLOCALBUNDLETIMELINECOMPLICATIONCONTROLLER_H
#define NTKLOCALBUNDLETIMELINECOMPLICATIONCONTROLLER_H



#import "NTKLocalTimelineComplicationController.h"

@interface NTKLocalBundleTimelineComplicationController : NTKLocalTimelineComplicationController



+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)acceptsComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
+(Class)complicationDataSourceClassForComplication:(id)arg0 family:(NSInteger)arg1 device:(id)arg2 ;
+(Class)dataSourceFromComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;


@end


#endif