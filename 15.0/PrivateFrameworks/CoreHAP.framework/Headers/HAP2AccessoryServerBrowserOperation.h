// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERBROWSEROPERATION_H
#define HAP2ACCESSORYSERVERBROWSEROPERATION_H

@class NSError, NSMutableSet;


#import "HAP2LoggingObject.h"

@interface HAP2AccessoryServerBrowserOperation : HAP2LoggingObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSMutableSet *pendingCoordinators; // ivar: _pendingCoordinators
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif