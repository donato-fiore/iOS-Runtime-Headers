// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSUUID_H
#define _NSUUID_H

@protocol NSCopying, NSSecureCoding;


#import "NSUUID.h"

@interface _NSUUID : NSUUID <NSCopying, NSSecureCoding>





+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUIDBytes:(unsigned char)arg0 ;
-(id)initWithUUIDString:(id)arg0 ;


@end


#endif