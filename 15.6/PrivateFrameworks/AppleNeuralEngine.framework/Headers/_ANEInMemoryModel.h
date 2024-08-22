// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ANEINMEMORYMODEL_H
#define _ANEINMEMORYMODEL_H

@class NSString, NSDictionary, NSURL;

#import <Foundation/Foundation.h>

#import "_ANEInMemoryModelDescriptor.h"
#import "_ANEProgramForEvaluation.h"
#import "_ANEClient.h"

@interface _ANEInMemoryModel : NSObject

@property (copy, nonatomic) NSString *compilerOptionsFileName; // ivar: _compilerOptionsFileName
@property (retain, nonatomic) _ANEInMemoryModelDescriptor *descriptor; // ivar: _descriptor
@property (readonly, copy, nonatomic) NSString *hexStringIdentifier; // ivar: _hexStringIdentifier
@property (nonatomic) NSUInteger intermediateBufferHandle; // ivar: _intermediateBufferHandle
@property (readonly, nonatomic) BOOL isMILModel; // ivar: _isMILModel
@property (retain, nonatomic) NSDictionary *modelAttributes; // ivar: _modelAttributes
@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (nonatomic) unsigned int perfStatsMask; // ivar: _perfStatsMask
@property (retain, nonatomic) _ANEProgramForEvaluation *program; // ivar: _program
@property (nonatomic) NSUInteger programHandle; // ivar: _programHandle
@property (nonatomic) char queueDepth; // ivar: _queueDepth
@property (readonly, nonatomic) _ANEClient *sharedConnection; // ivar: _sharedConnection
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSUInteger string_id; // ivar: _string_id


+(id)inMemoryModelWithDescriptor:(id)arg0 ;
+(id)new;
+(void)initialize;
-(BOOL)compileWithQoS:(unsigned int)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)compiledModelExists;
-(BOOL)evaluateWithQoS:(unsigned int)arg0 options:(id)arg1 request:(id)arg2 error:(*id)arg3 ;
-(BOOL)loadWithQoS:(unsigned int)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)unloadWithQoS:(unsigned int)arg0 error:(*id)arg1 ;
-(id)compilerOptionsWithOptions:(id)arg0 isCompiledModelCached:(BOOL)arg1 ;
-(id)init;
-(id)initWithDesctiptor:(id)arg0 ;
-(id)localModelPath;
-(id)saveModelFiles;
-(void)dealloc;
-(void)purgeCompiledModel;


@end


#endif