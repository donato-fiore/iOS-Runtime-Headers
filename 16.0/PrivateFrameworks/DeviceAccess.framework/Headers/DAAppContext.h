// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAAPPCONTEXT_H
#define DAAPPCONTEXT_H

@class NSString;
@protocol CUXPCCodable, NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface DAAppContext : NSObject <CUXPCCodable, NSSecureCoding>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint; // ivar: _xpcEndpoint


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif