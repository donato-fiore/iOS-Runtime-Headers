// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCCOMPANIONCONDITIONSDATASOURCE_H
#define NWCCOMPANIONCONDITIONSDATASOURCE_H



#import "NWCCompanionBaseDataSource.h"

@interface NWCCompanionConditionsDataSource : NWCCompanionBaseDataSource



+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)bundleIdentifier;
-(id)sampleTemplate;


@end


#endif