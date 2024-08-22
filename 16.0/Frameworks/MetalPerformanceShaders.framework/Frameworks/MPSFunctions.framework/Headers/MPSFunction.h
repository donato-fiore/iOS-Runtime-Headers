// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSFUNCTION_H
#define MPSFUNCTION_H

@class NSError, NSString;
@protocol NSCopying, NSSecureCoding, MTLLibrary, MTLDevice, MTLFunction;

#import <Foundation/Foundation.h>

#import "CompilationResult.h"

@interface MPSFunction : NSObject <NSCopying, NSSecureCoding>

 {
    id<MTLLibrary> *_library;
    ? _fileVersion;
    CompilationResult *_compilationResult;
}


@property (readonly, retain, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) NSObject<MTLFunction> *function;
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
-(id)initWithDevice:(id)arg0 functionName:(id)arg1 zone:(struct _NSZone *)arg2 error:(*id)arg3 ;
-(id)newDAGUsingFunctionList:(id)arg0 ;
-(void)buildAsync:(id)arg0 withLibrary:(id)arg1 ;
-(void)buildIsCompleteWithFunction:(id)arg0 error:(id)arg1 ;
-(void)buildStitchedFunctionAsyncWithName:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif