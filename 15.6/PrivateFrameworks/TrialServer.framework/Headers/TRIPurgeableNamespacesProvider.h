// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPURGEABLENAMESPACESPROVIDER_H
#define TRIPURGEABLENAMESPACESPROVIDER_H

@class NSString;
@protocol TRIPurgeableNamespacesProviding, TRIPaths, TRIClientNamespaceMetadataStoring;

#import <Foundation/Foundation.h>


@interface TRIPurgeableNamespacesProvider : NSObject <TRIPurgeableNamespacesProviding>

 {
    id<TRIPaths> *_paths;
    id<TRIClientNamespaceMetadataStoring> *_clientNamespaceMetadataStorage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPaths:(id)arg0 clientNamespaceMetadataStorage:(id)arg1 ;
-(void)partitionPurgeableNamespacesForPurgeabilityLevel:(int)arg0 namespaceNamesPurgeableAtNamespaceLevel:(*id)arg1 eagerPurgeableFactorsByNamespaceName:(*id)arg2 ;


@end


#endif