// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSSHARINGCONTACTRANKERMLMODEL_H
#define _PSSHARINGCONTACTRANKERMLMODEL_H

@class NSDictionary, MLModel;

#import <Foundation/Foundation.h>


@interface _PSSharingContactRankerMLModel : NSObject

@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain) MLModel *mlModel; // ivar: _mlModel
@property CGFloat scoreThreshold; // ivar: _scoreThreshold


-(id)initWithMLModel:(id)arg0 scoreThreshold:(CGFloat)arg1 ;
-(id)initWithScoreThreshold:(CGFloat)arg0 ;
-(id)scoresOnFeatures:(id)arg0 ;
-(void)loadDefaultModel;


@end


#endif