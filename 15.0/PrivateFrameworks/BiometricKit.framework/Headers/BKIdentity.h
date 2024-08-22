// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKIDENTITY_H
#define BKIDENTITY_H

@class NSDate, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "BKDevice.h"

@interface BKIdentity : NSObject

@property (retain, nonatomic) NSDate *creationTime; // ivar: _creationTime
@property (retain, nonatomic) BKDevice *device; // ivar: _device
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) unsigned int userID; // ivar: _userID
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)identity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithServerIdentity:(id)arg0 device:(id)arg1 ;
-(id)serverIdentity;


@end


#endif