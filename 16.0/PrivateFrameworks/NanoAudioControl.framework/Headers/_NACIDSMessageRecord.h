// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NACIDSMESSAGERECORD_H
#define _NACIDSMESSAGERECORD_H

@class PBCodable, NSString;

#import <Foundation/Foundation.h>


@interface _NACIDSMessageRecord : NSObject

@property (retain, nonatomic) PBCodable *message; // ivar: _message
@property (copy, nonatomic) NSString *queueOne; // ivar: _queueOne
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (nonatomic) NSInteger type; // ivar: _type




@end


#endif