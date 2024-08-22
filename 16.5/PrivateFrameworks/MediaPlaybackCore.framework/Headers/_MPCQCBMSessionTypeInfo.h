// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQCBMSESSIONTYPEINFO_H
#define _MPCQCBMSESSIONTYPEINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MPCPlaybackAccount.h"

@interface _MPCQCBMSessionTypeInfo : NSObject

@property (copy, nonatomic) MPCPlaybackAccount *account; // ivar: _account
@property (nonatomic) BOOL exportable; // ivar: _exportable
@property (copy, nonatomic) NSString *exportableReason; // ivar: _exportableReason
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL supported; // ivar: _supported
@property (copy, nonatomic) NSString *supportedReason; // ivar: _supportedReason


+(id)infoWithIdentifier:(id)arg0 account:(id)arg1 supported:(BOOL)arg2 supportedReason:(id)arg3 exportable:(BOOL)arg4 exportableReason:(id)arg5 ;


@end


#endif