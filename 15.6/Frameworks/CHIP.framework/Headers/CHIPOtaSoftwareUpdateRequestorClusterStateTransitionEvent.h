// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOTASOFTWAREUPDATEREQUESTORCLUSTERSTATETRANSITIONEVENT_H
#define CHIPOTASOFTWAREUPDATEREQUESTORCLUSTERSTATETRANSITIONEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPOtaSoftwareUpdateRequestorClusterStateTransitionEvent : NSObject

@property (retain, nonatomic, getter=getNewState) NSNumber *newState; // ivar: _newState
@property (retain, nonatomic) NSNumber *previousState; // ivar: _previousState
@property (retain, nonatomic) NSNumber *reason; // ivar: _reason
@property (retain, nonatomic) NSNumber *targetSoftwareVersion; // ivar: _targetSoftwareVersion


-(id)init;


@end


#endif