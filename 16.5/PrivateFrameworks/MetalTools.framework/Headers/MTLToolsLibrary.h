// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTOOLSLIBRARY_H
#define MTLTOOLSLIBRARY_H

@class NSData, NSString, NSArray, NSUUID;
@protocol MTLLibrarySPI, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI>



@property (readonly) NSData *bitcodeData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSArray *externFunctionNames;
@property (readonly) NSArray *functionNames;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *installName;
@property (copy) NSString *label;
@property (readonly, copy) NSUUID *libraryIdentifier;
@property (copy) NSString *overrideTriple;
@property (nonatomic) BOOL shaderValidationEnabled;
@property (readonly) Class superclass;
@property (readonly) NSInteger type;


-(BOOL)serializeToURL:(id)arg0 error:(*id)arg1 ;
-(id)newExternFunctionWithName:(id)arg0 ;
-(id)newFunctionWithDescriptor:(id)arg0 destinationArchive:(id)arg1 error:(*id)arg2 ;
-(id)newFunctionWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newFunctionWithName:(id)arg0 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 error:(*id)arg2 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 pipelineLibrary:(id)arg2 error:(*id)arg3 ;
-(id)newIntersectionFunctionWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)newFunctionWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newFunctionWithName:(id)arg0 constantValues:(id)arg1 completionHandler:(id)arg2 ;
-(void)newFunctionWithName:(id)arg0 constantValues:(id)arg1 pipelineLibrary:(id)arg2 completionHandler:(id)arg3 ;
-(void)newIntersectionFunctionWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif