// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRPASSCODECREDENTIALS_H
#define MRPASSCODECREDENTIALS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MRPasscodeCredentials : NSObject

@property (nonatomic) NSUInteger characterCount; // ivar: _characterCount
@property (copy, nonatomic) NSString *passcode; // ivar: _passcode
@property (nonatomic) unsigned int type; // ivar: _type


+(id)standardCredentials;


@end


#endif