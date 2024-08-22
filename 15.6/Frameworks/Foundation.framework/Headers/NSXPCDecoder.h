// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSXPCDECODER_H
#define NSXPCDECODER_H

@protocol OS_xpc_object;


#import "NSXPCCoder.h"
#import "NSXPCInterface.h"
#import "NSXPCConnection.h"

@interface NSXPCDecoder : NSXPCCoder {
    NSUInteger _genericIndex;
    ? _decoder;
    ? _collections;
    ? _rootObject;
    BOOL expectsUnnestedCollection;
    BOOL decodedCollection;
    BOOL _strictSecureDecodingEnabled;
    BOOL _enforceSubclassesMustBeExplicitlyMentionedWhenDecoded;
    unsigned int _collectionPointer;
    id _allowedClassesList;
    NSInteger _allowedClassesIndex;
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCInterface *_interface;
}


@property NSXPCConnection *_connection; // ivar: _connection


-(BOOL)allowsKeyedCoding;
-(BOOL)containsValueForKey:(id)arg0 ;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSInteger)decodeIntegerForKey:(id)arg0 ;
-(char *)_decodeCStringForKey:(id)arg0 ;
-(char *)decodeBytesForKey:(id)arg0 returnedLength:(*NSUInteger)arg1 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)__decoderInfoForAllowedClassesWarning;
-(id)_decodeArrayOfObjectsForKey:(id)arg0 ;
-(id)_decodeCollectionOfClass:(Class)arg0 allowedClasses:(id)arg1 forKey:(id)arg2 ;
-(id)_decodeObjectOfClasses:(id)arg0 atObject:(struct ? *)arg1 ;
-(id)_decodeReplyFromXPCObject:(id)arg0 forSelector:(SEL)arg1 ;
-(id)_xpcObjectForIndex:(NSInteger)arg0 ;
-(id)allowedClasses;
-(id)connection;
-(id)debugDescription;
-(id)decodeArrayOfObjectsOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)decodeDictionaryWithKeysOfClasses:(id)arg0 objectsOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)decodeObject;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodeObjectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)decodeXPCObjectForKey:(id)arg0 ;
-(id)decodeXPCObjectOfType:(struct _xpc_type_s *)arg0 forKey:(id)arg1 ;
-(id)initWithInterface:(id)arg0 ;
-(int)__decodeXPCObject:(id)arg0 allowingSimpleMessageSend:(BOOL)arg1 outInvocation:(*id)arg2 outArguments:(*id)arg3 outArgumentsMaxCount:(NSUInteger)arg4 outMethodSignature:(*id)arg5 outSelector:(*SEL)arg6 isReply:(BOOL)arg7 replySelector:(SEL)arg8 ;
-(int)_decodeMessageFromXPCObject:(id)arg0 allowingSimpleMessageSend:(BOOL)arg1 outInvocation:(*id)arg2 outArguments:(*id)arg3 outArgumentsMaxCount:(NSUInteger)arg4 outMethodSignature:(*id)arg5 outSelector:(*SEL)arg6 ;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;
-(void)_enforceSubclassesMustBeExplicitlyMentionedWhenDecoded;
-(void)_startReadingFromXPCObject:(id)arg0 ;
-(void)_validateAllowedClass:(Class)arg0 forKey:(id)arg1 allowingInvocations:(BOOL)arg2 ;
-(void)_validateAllowedXPCType:(struct _xpc_type_s *)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)decodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;


@end


#endif