// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTTASKCONTEXT_H
#define _LTTASKCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_LTLocalePair.h"

@interface _LTTaskContext : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (readonly, copy, nonatomic) NSString *deviceOS; // ivar: _deviceOS
@property (readonly, copy, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (readonly, copy, nonatomic) _LTLocalePair *localePair; // ivar: _localePair
@property (readonly, copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly, nonatomic) NSInteger taskHint; // ivar: _taskHint


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 taskHint:(NSInteger)arg1 localePair:(id)arg2 deviceOS:(id)arg3 deviceType:(id)arg4 appIdentifier:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif