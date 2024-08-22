// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHROINODE_H
#define PGGRAPHROINODE_H

@class NSString, NSArray;
@protocol PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature;


#import "PGGraphPropertylessNode.h"
#import "PGGraphROINodeCollection.h"

@interface PGGraphROINode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature>

 {
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphROINodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) NSString *pg_topic;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)_localizationKeyForROINode:(id)arg0 ;
+(id)beachFilter;
+(id)filter;
+(id)filterForTypes:(id)arg0 ;
+(id)momentOfROI;
+(id)mountainFilter;
+(id)natureFilter;
+(id)urbanFilter;
+(id)validROILabels;
+(id)waterFilter;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(unsigned short)domain;


@end


#endif