// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSMETHODSIGNATURE_H
#define NSMETHODSIGNATURE_H


#import <Foundation/Foundation.h>


@interface NSMethodSignature : NSObject {
    ? _frameDescriptor;
    char * _typeString;
    NSUInteger _flags;
}


@property (readonly) NSUInteger frameLength;
@property (readonly) NSUInteger methodReturnLength;
@property (readonly) char * methodReturnType;
@property (readonly) NSUInteger numberOfArguments;


+(id)signatureWithObjCTypes:(char *)arg0 ;
+(void)initialize;
-(BOOL)_isAllObjects;
-(BOOL)_isHiddenStructRet;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOneway;
-(Class)_classForObjectAtArgumentIndex:(NSInteger)arg0 ;
-(NSUInteger)_flags;
-(NSUInteger)hash;
-(char *)_cTypeString;
-(char *)getArgumentTypeAtIndex:(NSUInteger)arg0 ;
-(id)_initWithROMEntry:(struct CFMethodSignatureROMEntry *)arg0 ;
-(id)_protocolsForObjectAtArgumentIndex:(NSInteger)arg0 ;
-(id)_signatureForBlockAtArgumentIndex:(NSInteger)arg0 ;
-(id)_typeString;
-(id)debugDescription;
-(id)init;
-(struct NSMethodFrameArgInfo *)_argInfo:(NSInteger)arg0 ;
-(struct NSMethodFrameDescriptor *)_frameDescriptor;
-(void)dealloc;


@end


#endif