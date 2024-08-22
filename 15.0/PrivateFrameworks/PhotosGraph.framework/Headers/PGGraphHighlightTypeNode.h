// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHHIGHLIGHTTYPENODE_H
#define PGGRAPHHIGHLIGHTTYPENODE_H

@class NSString;
@protocol PGAssetCollectionFeature;


#import "PGGraphPropertylessNode.h"

@interface PGGraphHighlightTypeNode : PGGraphPropertylessNode <PGAssetCollectionFeature>

 {
    NSString *_label;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)aggregationTypeNodeFilter;
+(id)concludedTripTypeNodeFilter;
+(id)defaultTypeNodeFilter;
+(id)filter;
+(id)longTripTypeNodeFilter;
+(id)onGoingTripTypeNodeFilter;
+(id)shortTripTypeNodeFilter;
+(id)tripTypeNodeFilter;
+(id)typeNodeFilterForLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(unsigned short)domain;


@end


#endif