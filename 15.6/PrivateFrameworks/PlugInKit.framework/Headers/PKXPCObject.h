// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKXPCOBJECT_H
#define PKXPCOBJECT_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PKXPCObject : NSObject <NSSecureCoding>



@property (retain) NSObject<OS_xpc_object> *object; // ivar: _object


+(BOOL)supportsSecureCoding;
+(id)object:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif