// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFXPCWRAPPER_H
#define AFXPCWRAPPER_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface AFXPCWrapper : NSObject <NSSecureCoding>

 {
    NSObject<OS_xpc_object> *_xpcObject;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCObject:(id)arg0 ;
-(id)xpcObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif