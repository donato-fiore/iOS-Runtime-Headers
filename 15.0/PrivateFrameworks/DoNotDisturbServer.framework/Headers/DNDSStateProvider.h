// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSSTATEPROVIDER_H
#define DNDSSTATEPROVIDER_H

@class DNDState;

#import <Foundation/Foundation.h>

#import "DNDSModeConfigurationManager.h"
#import "DNDSStateProviderSystemSnapshot.h"

@interface DNDSStateProvider : NSObject {
    DNDSModeConfigurationManager *_modeConfigurationManager;
}


@property (copy) DNDState *lastCalculatedState; // ivar: _lastCalculatedState
@property (copy) DNDSStateProviderSystemSnapshot *lastSystemSnapshot; // ivar: _lastSystemSnapshot


-(id)initWithModeConfigurationManager:(id)arg0 ;
-(id)recalculateStateForSnapshot:(id)arg0 ;


@end


#endif