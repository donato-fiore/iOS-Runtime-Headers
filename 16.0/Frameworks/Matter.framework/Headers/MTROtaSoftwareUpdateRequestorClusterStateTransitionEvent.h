// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROTASOFTWAREUPDATEREQUESTORCLUSTERSTATETRANSITIONEVENT_H
#define MTROTASOFTWAREUPDATEREQUESTORCLUSTERSTATETRANSITIONEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTROtaSoftwareUpdateRequestorClusterStateTransitionEvent : NSObject

@property (retain, nonatomic, getter=getNewState) NSNumber *newState; // ivar: _newState
@property (retain, nonatomic) NSNumber *previousState; // ivar: _previousState
@property (retain, nonatomic) NSNumber *reason; // ivar: _reason
@property (retain, nonatomic) NSNumber *targetSoftwareVersion; // ivar: _targetSoftwareVersion


-(id)description;
-(id)init;


@end


#endif