// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHAUDIOFEATURENODE_H
#define PGGRAPHAUDIOFEATURENODE_H

@class NSString;
@protocol PGAssetCollectionFeature;


#import "PGGraphPropertylessNode.h"
#import "PGGraphAudioFeatureNodeCollection.h"

@interface PGGraphAudioFeatureNode : PGGraphPropertylessNode <PGAssetCollectionFeature>

 {
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphAudioFeatureNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)filter;
+(id)filterForAudioFeatureLabel:(id)arg0 ;
+(id)momentOfAudioFeature;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;
-(unsigned short)domain;


@end


#endif