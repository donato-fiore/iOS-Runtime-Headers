// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDRRESETREQUEST_H
#define DDRRESETREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DDRResetOptions.h"

@interface DDRResetRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) DDRResetOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 options:(id)arg1 reason:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif