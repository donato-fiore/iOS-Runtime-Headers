// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGEBASE_H
#define MCMXPCMESSAGEBASE_H

@class NSString;
@protocol MCMXPCMessage, MCMContext, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface MCMXPCMessageBase : NSObject <MCMXPCMessage>



@property (readonly, nonatomic) NSUInteger command; // ivar: _command
@property (readonly, nonatomic) NSObject<MCMContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int platform; // ivar: _platform
@property (readonly, nonatomic) *container_client proxy; // ivar: _proxy
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject; // ivar: _xpcObject


+(id)userIdentityForContainerIdentifier:(id)arg0 clientIdentity:(id)arg1 containerClass:(NSUInteger)arg2 error:(*NSUInteger)arg3 ;
+(id)xpcMessageFromXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)concreteContainerIdentityFromXPCObject:(id)arg0 identifierKey:(char *)arg1 classKey:(char *)arg2 UUIDKey:(char *)arg3 personaUniqueStringKey:(char *)arg4 context:(id)arg5 error:(*NSUInteger)arg6 ;
-(id)containerIdentityFromXPCObject:(id)arg0 identifierKey:(char *)arg1 classKey:(char *)arg2 transientKey:(char *)arg3 context:(id)arg4 error:(*NSUInteger)arg5 ;
-(id)identifierFromXPCObject:(id)arg0 elseClientIdentifier:(id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)nsObjectFromXPCObject:(id)arg0 key:(char *)arg1 ;
-(id)nsStringValueFromXPCObject:(id)arg0 key:(char *)arg1 ;
-(id)nsUUIDValueFromXPCObject:(id)arg0 key:(char *)arg1 ;
-(id)userIdentityFromClientPersonaUniqueString:(id)arg0 clientIdentity:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)userIdentityFromXPCObject:(id)arg0 key:(char *)arg1 containerClass:(NSUInteger)arg2 clientIdentity:(id)arg3 error:(*NSUInteger)arg4 ;
-(void)dealloc;


@end


#endif