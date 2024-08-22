// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHSCENECLASSIFICATION_H
#define PHSCENECLASSIFICATION_H


#import <Foundation/Foundation.h>


@interface PHSceneClassification : NSObject

@property (readonly, nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic) NSInteger packedBoundingBoxRect; // ivar: _packedBoundingBoxRect
@property (readonly, nonatomic) unsigned int sceneIdentifier; // ivar: _sceneIdentifier


+(id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSceneClassification:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSceneIdentifier:(unsigned int)arg0 confidence:(CGFloat)arg1 ;
-(id)initWithSceneIdentifier:(unsigned int)arg0 confidence:(CGFloat)arg1 boundingBox:(struct CGRect )arg2 ;


@end


#endif