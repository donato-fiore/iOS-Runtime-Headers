// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHAREANODECOLLECTION_H
#define PGGRAPHAREANODECOLLECTION_H

@class NSString;
@protocol PGGraphLocationOrAreaNodeCollection, PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphAddressNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"

@interface PGGraphAreaNodeCollection : PGGraphNodeCollection <PGGraphLocationOrAreaNodeCollection, PGAssetCollectionFeatureNodeCollection>



@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(id)areaNodesForNames:(id)arg0 inGraph:(id)arg1 ;
-(id)nonBlockedAreaNodes;


@end


#endif