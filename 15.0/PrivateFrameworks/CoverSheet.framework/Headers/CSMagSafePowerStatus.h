// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSMAGSAFEPOWERSTATUS_H
#define CSMAGSAFEPOWERSTATUS_H


#import <Foundation/Foundation.h>


@interface CSMagSafePowerStatus : NSObject

@property (nonatomic) int chargeState; // ivar: _chargeState
@property (nonatomic) CGFloat powerPercent; // ivar: _powerPercent
@property (nonatomic) NSUInteger powerStatus; // ivar: _powerStatus


-(id)init;


@end


#endif