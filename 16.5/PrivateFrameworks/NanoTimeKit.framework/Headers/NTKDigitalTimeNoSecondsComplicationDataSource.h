// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKDIGITALTIMENOSECONDSCOMPLICATIONDATASOURCE_H
#define NTKDIGITALTIMENOSECONDSCOMPLICATIONDATASOURCE_H



#import "NTKDigitalTimeComplicationDataSource.h"

@interface NTKDigitalTimeNoSecondsComplicationDataSource : NTKDigitalTimeComplicationDataSource



+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(id)_templateWithShouldDisplayIdealizeState:(BOOL)arg0 ;


@end


#endif