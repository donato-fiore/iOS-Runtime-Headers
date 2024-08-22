// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSXPCENCODER_H
#define NSXPCENCODER_H

@protocol OS_xpc_object, NSXPCEncoderDelegate;


#import "NSXPCCoder.h"
#import "NSXPCConnection.h"

@interface NSXPCEncoder : NSXPCCoder {
    NSObject<OS_xpc_object> *_oolObjects;
    *__CFDictionary _replacedByDelegateObjects;
    ? _encoder;
    NSUInteger _genericIndex;
    BOOL _topLevelDictionary;
    BOOL _finished;
    BOOL _askForReplacement;
}


@property NSXPCConnection *_connection; // ivar: _connection
@property NSObject<NSXPCEncoderDelegate> *delegate; // ivar: _delegate


-(BOOL)allowsKeyedCoding;
-(NSUInteger)_addOOLXPCObject:(id)arg0 ;
-(id)_newRootXPCObject;
-(id)_replaceObject:(id)arg0 ;
-(id)connection;
-(id)debugDescription;
-(id)init;
-(id)initWithStackSpace:(char *)arg0 size:(NSUInteger)arg1 ;
-(void)_checkObject:(id)arg0 ;
-(void)_encodeArrayOfObjects:(id)arg0 forKey:(id)arg1 ;
-(void)_encodeCString:(char *)arg0 length:(NSUInteger)arg1 forKey:(id)arg2 ;
-(void)_encodeInvocation:(id)arg0 isReply:(BOOL)arg1 into:(id)arg2 ;
-(void)_encodeInvocationObjectArgumentsOnly:(*id)arg0 count:(NSUInteger)arg1 typeString:(char *)arg2 selector:(SEL)arg3 isReply:(BOOL)arg4 into:(id)arg5 ;
-(void)_encodeObject:(id)arg0 ;
-(void)_encodeUnkeyedObject:(id)arg0 ;
-(void)_startTopLevelDictionary;
-(void)dealloc;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeBytes:(char *)arg0 length:(NSUInteger)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeDataObject:(id)arg0 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeFloat:(float)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeInt:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;
-(void)encodeXPCObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif