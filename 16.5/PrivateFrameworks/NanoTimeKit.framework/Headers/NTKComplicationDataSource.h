// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOMPLICATIONDATASOURCE_H
#define NTKCOMPLICATIONDATASOURCE_H

@class CLKCComplicationDataSource;


#import "NTKComplication.h"

@interface NTKComplicationDataSource : CLKCComplicationDataSource

@property (readonly, nonatomic) NTKComplication *complication;


+(BOOL)acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)acceptsComplicationType:(NSUInteger)arg0 withFamily:(NSInteger)arg1 forDevice:(id)arg2 ;
+(Class)dataSourceClassForComplicationType:(NSUInteger)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg0 ;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(id)sampleTemplate;


@end


#endif