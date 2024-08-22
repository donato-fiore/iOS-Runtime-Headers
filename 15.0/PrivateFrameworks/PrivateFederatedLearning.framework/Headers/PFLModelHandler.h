// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLMODELHANDLER_H
#define PFLMODELHANDLER_H

@class MLUpdateContext, MLModel, NSURL;

#import <Foundation/Foundation.h>


@interface PFLModelHandler : NSObject

@property (retain, nonatomic) MLUpdateContext *context; // ivar: _context
@property (readonly, nonatomic) MLModel *model; // ivar: _model
@property (readonly, nonatomic) NSURL *modelURL; // ivar: _modelURL


-(id)initWithModelURL:(id)arg0 error:(*id)arg1 ;
-(void)evaluateWithDataProvider:(id)arg0 completion:(id)arg1 ;
-(void)updateOrderedLayerNames:(id)arg0 withDataProvider:(id)arg1 withPatchModelShapes:(id)arg2 withPatchModelData:(id)arg3 withModelConfiguration:(id)arg4 completion:(id)arg5 ;


@end


#endif