// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFMOBILEKEYBAGUNLOCKOPTIONS_H
#define SBFMOBILEKEYBAGUNLOCKOPTIONS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SBFMobileKeyBagUnlockOptions : NSObject

@property (readonly, copy, nonatomic) NSData *passcode; // ivar: _passcode
@property (readonly, nonatomic) BOOL skipSEKeepUserDataOperation; // ivar: _skipSEKeepUserDataOperation


-(id)initWithPasscode:(id)arg0 ;
-(id)initWithPasscode:(id)arg0 skipSEKeepUserDataOperation:(BOOL)arg1 ;


@end


#endif