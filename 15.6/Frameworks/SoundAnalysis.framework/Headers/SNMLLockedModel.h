// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNMLLOCKEDMODEL_H
#define SNMLLOCKEDMODEL_H

@class NSString, MLModelDescription;
@protocol SNMLModel;

#import <Foundation/Foundation.h>


@interface SNMLLockedModel : NSObject <SNMLModel>

 {
    id<SNMLModel> *_model;
    mutex _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MLModelDescription *modelDescription;
@property (readonly) Class superclass;


-(id)initWithModel:(id)arg0 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif