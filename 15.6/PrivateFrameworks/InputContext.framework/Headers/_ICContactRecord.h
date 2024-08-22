// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICCONTACTRECORD_H
#define _ICCONTACTRECORD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_ICContact.h"

@interface _ICContactRecord : NSObject

@property (readonly, nonatomic) unsigned char changeType; // ivar: _changeType
@property (readonly, nonatomic) _ICContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) unsigned char source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContactRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 contact:(id)arg1 changeType:(unsigned char)arg2 source:(unsigned char)arg3 ;


@end


#endif