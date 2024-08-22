// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSXPCCODER_H
#define NSXPCCODER_H

@protocol NSObject;


#import "NSCoder.h"
#import "NSXPCConnection.h"

@interface NSXPCCoder : NSCoder

@property (readonly) NSXPCConnection *connection;
@property (retain) NSObject<NSObject> *userInfo; // ivar: _userInfo


+(id)_testEncodeAndDecodeInvocation:(id)arg0 interface:(id)arg1 ;
+(id)_testEncodeAndDecodeObject:(id)arg0 allowedClass:(Class)arg1 ;
+(id)_testEncodeAndDecodeObject:(id)arg0 allowedClasses:(id)arg1 ;
-(BOOL)requiresSecureCoding;
-(id)decodeXPCObjectForKey:(id)arg0 ;
-(id)decodeXPCObjectOfType:(struct _xpc_type_s *)arg0 forKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeXPCObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif