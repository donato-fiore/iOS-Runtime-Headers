// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHPOINODE_H
#define PGGRAPHPOINODE_H

@class NSString, NSArray;
@protocol PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport;


#import "PGGraphPropertylessNode.h"
#import "PGGraphPOINodeCollection.h"

@interface PGGraphPOINode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport>

 {
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphPOINodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) NSString *pg_topic;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)_localizationKeyForPOINode:(id)arg0 ;
+(id)filter;
+(id)filterWithLabel:(id)arg0 ;
+(id)filterWithLabels:(id)arg0 ;
+(id)momentOfPOI;
+(id)validPOILabels;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;
-(unsigned short)domain;


@end


#endif