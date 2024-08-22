// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFMODELSTOREMODELMETADATAPROVIDER_H
#define LCFMODELSTOREMODELMETADATAPROVIDER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface LCFModelStoreModelMetadataProvider : NSObject

@property (readonly, nonatomic) NSURL *metadataPlistFileURL; // ivar: _metadataPlistFileURL
@property (readonly, nonatomic) NSURL *modelStoreRootWithKeyURL; // ivar: _modelStoreRootWithKeyURL


-(BOOL)removeModelMetadata:(id)arg0 ;
-(BOOL)setModelMetadata:(id)arg0 metadata:(id)arg1 ;
-(id)getMetadata;
-(id)getModelMetadata:(id)arg0 ;
-(id)init:(id)arg0 ;


@end


#endif