// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFDATAANALYTICSMODULE_H
#define HFDATAANALYTICSMODULE_H

@protocol HFMediaProfileContainer;


#import "HFItemModule.h"
#import "HFDataAnalyticsLogItemProvider.h"

@interface HFDataAnalyticsModule : HFItemModule

@property (readonly, nonatomic) HFDataAnalyticsLogItemProvider *logItemProvider; // ivar: _logItemProvider
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 mediaProfileContainer:(id)arg1 ;
-(id)itemProviders;


@end


#endif