// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWCCOMPANIONWINDDATASOURCE_H
#define NWCCOMPANIONWINDDATASOURCE_H



#import "NWCCompanionBaseDataSource.h"

@interface NWCCompanionWindDataSource : NWCCompanionBaseDataSource



+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)bundleIdentifier;
-(id)sampleTemplate;


@end


#endif