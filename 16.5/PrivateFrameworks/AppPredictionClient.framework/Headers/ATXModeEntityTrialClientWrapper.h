// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEENTITYTRIALCLIENTWRAPPER_H
#define ATXMODEENTITYTRIALCLIENTWRAPPER_H

@class _PASLock;


#import "ATXTrialClientWrapper.h"

@interface ATXModeEntityTrialClientWrapper : ATXTrialClientWrapper {
    _PASLock *_lock;
}




+(id)sharedInstance;
-(id)appModeEntityDenyListModelWeights;
-(id)appModeEntityModelWeights;
-(id)contactModeEntityDenyListModelWeights;
-(id)contactModeEntityModelWeights;
-(id)initWithClientIdentifier:(int)arg0 ;
-(id)notificationModeEntityModelWeights;
-(id)trainDenyListWithDenyListModels;
-(id)widgetModeEntityModelWeights;
-(void)updateFactors;


@end


#endif