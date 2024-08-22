// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FZMESSAGE_H
#define FZMESSAGE_H

@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;


#import "IMMessageItem.h"

@interface FZMessage : IMMessageItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>





+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIMRemoteObjectSerializedDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg0 ;


@end


#endif