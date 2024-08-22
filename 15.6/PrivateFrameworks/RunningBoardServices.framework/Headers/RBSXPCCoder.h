// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSXPCCODER_H
#define RBSXPCCODER_H

@class NSKeyedArchiver, NSKeyedUnarchiver, NSString;
@protocol RBSXPCEncoding, RBSXPCDecoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface RBSXPCCoder : NSObject <RBSXPCEncoding, RBSXPCDecoding>

 {
    NSObject<OS_xpc_object> *_codingContext;
    NSKeyedArchiver *_archiver;
    NSKeyedUnarchiver *_unarchiver;
    int _finalized;
}


@property (readonly, retain, nonatomic) NSObject<OS_xpc_object> *XPCConnection; // ivar: _xpcConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSObject<OS_xpc_object> *message; // ivar: _message
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(id)coder;
+(id)coderWithMessage:(id)arg0 ;
+(id)rbs_testEncode:(id)arg0 andDecodeOfExpectedClass:(Class)arg1 ;
+(id)rbs_testNSEncode:(id)arg0 andDecodeOfExpectedClass:(Class)arg1 ;
-(BOOL)containsValueForKey:(id)arg0 ;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSUInteger)decodeUInt64ForKey:(id)arg0 ;
-(id)_finishCoding;
-(id)_implicitDecodeXPCObjectForKey:(id)arg0 ;
-(id)createMessage;
-(id)decodeCollectionOfClass:(Class)arg0 containingClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)decodeStringForKey:(id)arg0 ;
-(id)decodeXPCObjectOfType:(struct _xpc_type_s *)arg0 forKey:(id)arg1 ;
-(id)init;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)_removeValueForKey:(id)arg0 ;
-(void)dealloc;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeCollection:(id)arg0 forKey:(id)arg1 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeUInt64:(NSUInteger)arg0 forKey:(id)arg1 ;
-(void)encodeXPCObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif