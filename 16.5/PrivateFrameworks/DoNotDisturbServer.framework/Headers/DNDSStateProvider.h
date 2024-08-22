// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSSTATEPROVIDER_H
#define DNDSSTATEPROVIDER_H

@class NSString, DNDState;
@protocol DNDSStateProviding;

#import <Foundation/Foundation.h>

#import "DNDSModeConfigurationManager.h"
#import "DNDSStateProviderSystemSnapshot.h"

@interface DNDSStateProvider : NSObject <DNDSStateProviding>

 {
    DNDSModeConfigurationManager *_modeConfigurationManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) DNDState *lastCalculatedState; // ivar: _lastCalculatedState
@property (copy) DNDSStateProviderSystemSnapshot *lastSystemSnapshot; // ivar: _lastSystemSnapshot
@property (readonly) Class superclass;


-(id)initWithModeConfigurationManager:(id)arg0 ;
-(id)recalculateStateForSnapshot:(id)arg0 ;


@end


#endif