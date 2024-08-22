// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLXPCOBJECT_H
#define PLXPCOBJECT_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PLXPCObject : NSObject <NSSecureCoding>



@property (readonly) NSObject<OS_xpc_object> *object; // ivar: _object


+(BOOL)supportsSecureCoding;
+(struct _xpc_type_s *)type;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif