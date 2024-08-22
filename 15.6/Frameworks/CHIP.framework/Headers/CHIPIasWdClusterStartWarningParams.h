// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPIASWDCLUSTERSTARTWARNINGPARAMS_H
#define CHIPIASWDCLUSTERSTARTWARNINGPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPIasWdClusterStartWarningParams : NSObject

@property (retain, nonatomic) NSNumber *strobeDutyCycle; // ivar: _strobeDutyCycle
@property (retain, nonatomic) NSNumber *strobeLevel; // ivar: _strobeLevel
@property (retain, nonatomic) NSNumber *warningDuration; // ivar: _warningDuration
@property (retain, nonatomic) NSNumber *warningInfo; // ivar: _warningInfo


-(id)init;


@end


#endif