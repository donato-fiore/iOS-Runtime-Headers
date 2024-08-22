// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHHOMEWORKNODECOLLECTION_H
#define PGGRAPHHOMEWORKNODECOLLECTION_H

@class NSString;
@protocol PGAssetCollectionFeatureNodeCollection;


#import "PGGraphNodeCollection.h"
#import "PGGraphAddressNodeCollection.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"

@interface PGGraphHomeWorkNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>



@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *ownerNodes;
@property (readonly, nonatomic) PGGraphAddressNodeCollection *preciseAddressNodes;
@property (readonly) Class superclass;


+(Class)nodeClass;
+(id)homeNodesInGraph:(id)arg0 ;
+(id)workNodesInGraph:(id)arg0 ;


@end


#endif