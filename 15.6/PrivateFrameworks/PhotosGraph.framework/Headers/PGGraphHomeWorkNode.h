// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHHOMEWORKNODE_H
#define PGGRAPHHOMEWORKNODE_H

@class NSString;
@protocol PGGraphLocalizable, PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphHomeWorkNodeCollection.h"

@interface PGGraphHomeWorkNode : PGGraphOptimizedNode <PGGraphLocalizable, PGAssetCollectionFeature>

 {
    NSString *_uuid;
    CLLocationCoordinate2D _centroidCoordinate;
    NSString *_label;
}


@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) Class superclass;


+(id)addressOfHomeWork;
+(id)filter;
+(id)homeFilter;
+(id)ownerOfHomeWork;
+(id)workFilter;
-(BOOL)hasProperties:(id)arg0 ;
-(BOOL)isHome;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithLabel:(id)arg0 uuid:(id)arg1 ;
-(id)label;
-(id)propertyDictionary;
-(struct CLLocationCoordinate2D )coordinate;
-(unsigned short)domain;


@end


#endif