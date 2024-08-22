// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLLIBRARY_H
#define _MTLLIBRARY_H

@class MTLObjectWithLabel, NSData, NSString, NSArray, NSMutableDictionary, NSUUID;
@protocol MTLLibrarySPI, MTLDevice;



@interface _MTLLibrary : MTLObjectWithLabel <MTLLibrarySPI>

 {
    ? _cacheEntry;
}


@property (readonly) NSData *bitcodeData;
@property ? cacheEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, retain) NSArray *externFunctionNames;
@property (readonly, retain, nonatomic) NSMutableDictionary *functionDictionary; // ivar: _functionDictionary
@property (readonly, retain) NSArray *functionNames;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *installName;
@property (copy) NSString *label;
@property (readonly) *MTLLibraryData libraryData; // ivar: _libraryData
@property (readonly, copy) NSUUID *libraryIdentifier;
@property (copy) NSString *overrideTriple;
@property (nonatomic) BOOL shaderValidationEnabled; // ivar: _shaderValidationEnabled
@property (readonly) Class superclass;
@property (readonly) NSInteger type;
@property (readonly) NSArray *variableList;


-(?)initWithLibraryContainerdevice;
-(BOOL)serializeToURL:(id)arg0 error:(*id)arg1 ;
-(id)bitCodeWithHash:(struct ? *)arg0 ;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)newExternFunctionWithName:(id)arg0 ;
-(id)newFunctionWithDescriptor:(id)arg0 destinationArchive:(id)arg1 error:(*id)arg2 ;
-(id)newFunctionWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newFunctionWithHash:(struct ? *)arg0 ;
-(id)newFunctionWithName:(id)arg0 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 error:(*id)arg2 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 functionCache:(id)arg2 error:(*id)arg3 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 functionCache:(id)arg2 specializedName:(id)arg3 error:(*id)arg4 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 pipelineLibrary:(id)arg2 error:(*id)arg3 ;
-(id)newFunctionWithNameInternal:(id)arg0 ;
-(id)newIntersectionFunctionWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newSpecializedFunctionWithDescriptorInternal:(id)arg0 destinationArchive:(id)arg1 functionCache:(id)arg2 error:(*id)arg3 ;
-(void)newFunctionWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newFunctionWithDescriptor:(id)arg0 destinationArchive:(id)arg1 functionCache:(id)arg2 completionHandler:(id)arg3 ;
-(void)newFunctionWithName:(id)arg0 constantValues:(id)arg1 completionHandler:(id)arg2 ;
-(void)newFunctionWithName:(id)arg0 constantValues:(id)arg1 functionCache:(id)arg2 specializedName:(id)arg3 completionHandler:(id)arg4 ;
-(void)newFunctionWithName:(id)arg0 constantValues:(id)arg1 pipelineLibrary:(id)arg2 completionHandler:(id)arg3 ;
-(void)newIntersectionFunctionWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif