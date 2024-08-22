// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCURATIONMODELSPECIFICATION_H
#define CLSCURATIONMODELSPECIFICATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CLSCurationModelSpecification : NSObject <NSCopying>



@property (readonly) NSUInteger faceAnalysisVersion; // ivar: _faceAnalysisVersion
@property (readonly) NSUInteger mediaAnalysisVersion; // ivar: _mediaAnalysisVersion
@property (readonly) NSUInteger sceneAnalysisVersion; // ivar: _sceneAnalysisVersion


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithItemInfo:(id)arg0 options:(id)arg1 ;
-(id)initWithSceneAnalysisVersion:(NSUInteger)arg0 mediaAnalysisVersion:(NSUInteger)arg1 faceAnalysisVersion:(NSUInteger)arg2 ;


@end


#endif