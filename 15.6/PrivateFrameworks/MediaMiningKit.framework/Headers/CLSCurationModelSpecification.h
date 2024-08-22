// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSCURATIONMODELSPECIFICATION_H
#define CLSCURATIONMODELSPECIFICATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CLSCurationModelSpecification : NSObject <NSCopying>



@property (readonly) NSUInteger curationModelVersion; // ivar: _curationModelVersion
@property (readonly) NSUInteger faceAnalysisVersion; // ivar: _faceAnalysisVersion
@property (readonly) NSUInteger mediaAnalysisVersion; // ivar: _mediaAnalysisVersion
@property (readonly) NSUInteger sceneAnalysisVersion; // ivar: _sceneAnalysisVersion


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAsset:(id)arg0 curationModelVersion:(NSUInteger)arg1 ;
-(id)initWithCurationModelVersion:(NSUInteger)arg0 sceneAnalysisVersion:(NSUInteger)arg1 mediaAnalysisVersion:(NSUInteger)arg2 faceAnalysisVersion:(NSUInteger)arg3 ;
-(id)initWithItemInfo:(id)arg0 options:(id)arg1 ;


@end


#endif