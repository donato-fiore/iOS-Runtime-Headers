// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCCOMPLICATIONBUNDLEDATASOURCE_H
#define CLKCCOMPLICATIONBUNDLEDATASOURCE_H

@class CLKComplicationDescriptor;


#import "CLKCComplicationDataSource.h"

@interface CLKCComplicationBundleDataSource : CLKCComplicationDataSource

@property (readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor;


+(id)appGroupIdentifier;
+(id)appIdentifier;
+(id)bundleIdentifier;
+(id)complicationApplicationIdentifier;
+(id)legacyNTKComplicationType;
+(id)localizedAppName;
+(id)localizedComplicationName;
+(id)sectionIdentifier;
-(id)complicationApplicationIdentifier;
-(void)getLaunchURLForTimelineEntryDate:(id)arg0 timeTravelDate:(id)arg1 withHandler:(id)arg2 ;


@end


#endif