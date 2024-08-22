// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTTAPSTATUSMESSAGE_H
#define DTTAPSTATUSMESSAGE_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;


#import "DTTapMessage.h"

@interface DTTapStatusMessage : DTTapMessage <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *info;
@property (readonly, copy, nonatomic) NSString *notice;
@property (readonly, nonatomic) unsigned int status;
@property (readonly, nonatomic) NSUInteger timestamp;


+(BOOL)supportsSecureCoding;
-(id)initWithStatus:(unsigned int)arg0 timestamp:(NSUInteger)arg1 notice:(id)arg2 info:(id)arg3 ;


@end


#endif