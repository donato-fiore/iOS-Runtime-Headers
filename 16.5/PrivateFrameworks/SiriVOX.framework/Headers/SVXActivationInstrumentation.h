// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXACTIVATIONINSTRUMENTATION_H
#define SVXACTIVATIONINSTRUMENTATION_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface SVXActivationInstrumentation : NSObject

@property (readonly, nonatomic) NSUInteger buttonDownTimestamp; // ivar: _buttonDownTimestamp
@property (readonly, nonatomic) NSUUID *turnIdentifier; // ivar: _turnIdentifier


-(id)initWithTurnIdentifier:(id)arg0 buttonTimestamp:(NSUInteger)arg1 ;


@end


#endif