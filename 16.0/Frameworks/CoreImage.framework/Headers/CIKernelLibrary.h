// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIKERNELLIBRARY_H
#define CIKERNELLIBRARY_H

@class NSSet, NSMutableArray;
@protocol OS_dispatch_data, MTLLibrary;

#import <Foundation/Foundation.h>


@interface CIKernelLibrary : NSObject {
    NSObject<OS_dispatch_data> *_data;
    id<MTLLibrary> *_library;
    NSSet *_extern_function_names;
    NSMutableArray *_stitchable_function_names;
}


@property (readonly) NSUInteger functionCount;


+(id)coreImageDylibWithDevice:(id)arg0 ;
+(id)internalLibraryWithName:(id)arg0 device:(id)arg1 ;
+(id)libraryWithData:(id)arg0 error:(*id)arg1 ;
+(id)libraryWithSource:(id)arg0 error:(*id)arg1 ;
-(id)functionNames;
-(id)functionWithName:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithSource:(id)arg0 error:(*id)arg1 ;
-(id)newFunctionWithName:(id)arg0 ;
-(id)newMTLLibraryWithData:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)newMTLLibraryWithSource:(id)arg0 source:(id)arg1 error:(*id)arg2 ;
-(id)newSpecializedFunctionWithName:(id)arg0 constants:(*void)arg1 ;
-(void)dealloc;
-(void)initFunctionNames;


@end


#endif