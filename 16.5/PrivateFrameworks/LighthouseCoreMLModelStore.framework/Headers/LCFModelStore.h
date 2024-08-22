// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFMODELSTORE_H
#define LCFMODELSTORE_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "LCFModelStoreModelMetadataProvider.h"

@interface LCFModelStore : NSObject

@property (readonly, nonatomic) NSURL *emptyModelURL; // ivar: _emptyModelURL
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) LCFModelStoreModelMetadataProvider *modelMetadataProvider; // ivar: _modelMetadataProvider
@property (readonly, nonatomic) NSURL *modelStoreRootURL; // ivar: _modelStoreRootURL
@property (readonly, nonatomic) NSURL *modelStoreRootWithKeyURL; // ivar: _modelStoreRootWithKeyURL
@property (readonly, nonatomic) NSURL *originalEmptyModelURL; // ivar: _originalEmptyModelURL


-(BOOL)clear;
-(BOOL)deleteModel:(id)arg0 ;
-(BOOL)markModelTrained:(id)arg0 ;
-(BOOL)setModelMetadata:(id)arg0 key:(id)arg1 value:(id)arg2 ;
-(id)getBaseModelURL:(id)arg0 ;
-(id)getModelMetadata:(id)arg0 ;
-(id)getModelURL:(id)arg0 ;
-(id)init:(id)arg0 modelStoreRootURL:(id)arg1 ;
-(id)init:(id)arg0 modelStoreRootURL:(id)arg1 originalEmptyModelURL:(id)arg2 ;
-(id)listModelNames;
-(id)storeModel:(id)arg0 ;


@end


#endif