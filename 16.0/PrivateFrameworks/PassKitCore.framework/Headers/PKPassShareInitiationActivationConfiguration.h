// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHAREINITIATIONACTIVATIONCONFIGURATION_H
#define PKPASSSHAREINITIATIONACTIVATIONCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "PKPassShareActivationOptions.h"

@interface PKPassShareInitiationActivationConfiguration : NSObject

@property (nonatomic) BOOL allowUserEdit; // ivar: _allowUserEdit
@property (retain, nonatomic) PKPassShareActivationOptions *availableOptions; // ivar: _availableOptions
@property (retain, nonatomic) PKPassShareActivationOptions *defaultOptions; // ivar: _defaultOptions
@property (nonatomic) BOOL isBlocked; // ivar: _isBlocked


-(id)description;


@end


#endif