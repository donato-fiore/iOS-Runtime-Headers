// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSETUPPAIRINGCONTEXT_H
#define HFSETUPPAIRINGCONTEXT_H

@class HMSetupAccessoryDescription;

#import <Foundation/Foundation.h>


@interface HFSetupPairingContext : NSObject

@property (nonatomic) BOOL isTrustedOrigin; // ivar: _isTrustedOrigin
@property (retain, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription; // ivar: _setupAccessoryDescription


-(id)init;
-(id)initWithSetupAccessoryDescription:(id)arg0 isTrustedOrigin:(BOOL)arg1 ;


@end


#endif