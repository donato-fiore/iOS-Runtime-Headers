// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUNLOCKSTATE_H
#define SFUNLOCKSTATE_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFUnlockState : NSObject <NSSecureCoding>



@property (readonly) NSNumber *remotePasscodeEnabled; // ivar: _remotePasscodeEnabled
@property (readonly) NSNumber *unlockEnabled; // ivar: _unlockEnabled


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUnlockEnabled:(id)arg0 remotePasscodeEnabled:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif