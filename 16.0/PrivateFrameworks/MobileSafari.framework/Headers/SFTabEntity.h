// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTABENTITY_H
#define SFTABENTITY_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface SFTabEntity : NSObject

@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithUUID:(id)arg0 title:(id)arg1 address:(id)arg2 ;


@end


#endif