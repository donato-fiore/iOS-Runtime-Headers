// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHOVERTHEYEARSNODE_H
#define PGGRAPHOVERTHEYEARSNODE_H

@class NSString;
@protocol PGAssetCollectionFeature;


#import "PGGraphPropertylessNode.h"

@interface PGGraphOverTheYearsNode : PGGraphPropertylessNode <PGAssetCollectionFeature>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)filter;
-(id)collection;
-(id)init;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(unsigned short)domain;


@end


#endif