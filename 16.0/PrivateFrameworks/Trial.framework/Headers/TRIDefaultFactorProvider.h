// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIDEFAULTFACTORPROVIDER_H
#define TRIDEFAULTFACTORPROVIDER_H

@class _PASLock, NSString;
@protocol TRIFactorProviding, TRIPaths;

#import <Foundation/Foundation.h>

#import "TRIFactorsState.h"

@interface TRIDefaultFactorProvider : NSObject <TRIFactorProviding>

 {
    id<TRIPaths> *_paths;
    TRIFactorsState *_factorsState;
    _PASLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasRegisteredNamespaceWithName:(id)arg0 ;
-(BOOL)hasTreatmentInAnyOfLayers:(NSUInteger)arg0 withNamespaceName:(id)arg1 ;
-(id)_providerForNamespace:(id)arg0 ;
-(id)experimentDeploymentWithNamespaceName:(id)arg0 ;
-(id)factorLevelsWithNamespace:(unsigned int)arg0 ;
-(id)factorLevelsWithNamespaceName:(id)arg0 ;
-(id)factorPackIdWithNamespaceName:(id)arg0 ;
-(id)init;
-(id)initWithPaths:(id)arg0 factorsState:(id)arg1 ;
-(id)levelForFactor:(id)arg0 withNamespace:(unsigned int)arg1 ;
-(id)levelForFactor:(id)arg0 withNamespaceName:(id)arg1 ;
-(id)promotableFactorPackIdForNamespaceName:(id)arg0 ;
-(id)rolloutDeploymentWithNamespaceName:(id)arg0 ;
-(id)treatmentIdWithNamespaceName:(id)arg0 ;
-(unsigned int)compatibilityVersionWithNamespaceName:(id)arg0 ;
-(void)invalidateAllFactorProviders;
-(void)setContainer:(id)arg0 forNamespaceName:(id)arg1 ;


@end


#endif