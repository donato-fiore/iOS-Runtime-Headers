// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSCONTACTEMBEDDING_H
#define _PSCONTACTEMBEDDING_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface _PSContactEmbedding : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


-(id)convertToNSArrayFromMLMultiArray:(id)arg0 ;
-(id)getEmbeddingForContact:(id)arg0 ;
-(id)getEmbeddingFromFeatureDict:(id)arg0 ;
-(id)getEmbeddingsForContacts:(id)arg0 ;
-(id)init;
-(id)initWithModel:(id)arg0 ;


@end


#endif