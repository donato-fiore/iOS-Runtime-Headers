// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYCONTROLLERINFO_H
#define SBDISPLAYCONTROLLERINFO_H

@protocol SBDisplayControlling;

#import <Foundation/Foundation.h>


@interface SBDisplayControllerInfo : NSObject

@property (readonly, nonatomic) NSUInteger deactivationReasons; // ivar: _deactivationReasons
@property (readonly, nonatomic) NSObject<SBDisplayControlling> *displayController; // ivar: _displayController
@property (readonly, nonatomic) NSUInteger priorityLevel; // ivar: _priorityLevel
@property (readonly, nonatomic) NSInteger windowingMode; // ivar: _windowingMode


-(id)description;
-(id)initWithController:(id)arg0 windowingMode:(NSInteger)arg1 priorityLevel:(NSUInteger)arg2 deactivationReasons:(NSUInteger)arg3 ;


@end


#endif