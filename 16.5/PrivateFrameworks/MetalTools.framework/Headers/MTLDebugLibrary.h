// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGLIBRARY_H
#define MTLDEBUGLIBRARY_H

@class MTLCompileOptions, NSArray;


#import "MTLToolsLibrary.h"

@interface MTLDebugLibrary : MTLToolsLibrary

@property (copy, nonatomic) id *code; // ivar: _code
@property (copy, nonatomic) MTLCompileOptions *compileOptions; // ivar: _compileOptions
@property (nonatomic) NSUInteger debugType; // ivar: _debugType
@property (readonly, nonatomic) *? imageFilterFunctionInfo; // ivar: _imageFilterFunctionInfo
@property (readonly, nonatomic) NSArray *imageFilterFunctions; // ivar: _imageFilterFunctions


-(id)copyConstantValues:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 parent:(id)arg1 type:(NSUInteger)arg2 code:(id)arg3 options:(id)arg4 ;
-(id)newFunctionWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newFunctionWithName:(id)arg0 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 error:(*id)arg2 ;
-(id)newIntersectionFunctionWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)newFunctionWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newFunctionWithName:(id)arg0 constantValues:(id)arg1 completionHandler:(id)arg2 ;
-(void)newIntersectionFunctionWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)validateDescriptor:(id)arg0 expectedClass:(Class)arg1 ;


@end


#endif