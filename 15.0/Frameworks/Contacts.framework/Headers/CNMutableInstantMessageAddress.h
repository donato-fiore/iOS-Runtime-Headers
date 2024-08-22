// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMUTABLEINSTANTMESSAGEADDRESS_H
#define CNMUTABLEINSTANTMESSAGEADDRESS_H

@class NSString;


#import "CNInstantMessageAddress.h"

@interface CNMutableInstantMessageAddress : CNInstantMessageAddress

@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *username;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)freeze;


@end


#endif