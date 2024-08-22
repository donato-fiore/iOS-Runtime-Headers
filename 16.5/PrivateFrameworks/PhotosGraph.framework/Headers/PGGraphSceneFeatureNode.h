// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHSCENEFEATURENODE_H
#define PGGRAPHSCENEFEATURENODE_H

@class NSString;
@protocol PGAssetCollectionFeature;


#import "PGGraphPropertylessNode.h"
#import "PGGraphSceneFeatureNodeCollection.h"

@interface PGGraphSceneFeatureNode : PGGraphPropertylessNode <PGAssetCollectionFeature>

 {
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphSceneFeatureNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)filter;
+(id)filterForSceneName:(id)arg0 ;
+(id)filterForSceneNames:(id)arg0 ;
+(id)momentOfSceneFeature;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;
-(unsigned short)domain;


@end


#endif