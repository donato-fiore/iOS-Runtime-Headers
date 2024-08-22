// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPSUPPORTPACKAGEREADCOORDINATOR_H
#define TSPSUPPORTPACKAGEREADCOORDINATOR_H

@protocol OS_dispatch_queue;


#import "TSPPackageReadCoordinator.h"
#import "TSPPackage.h"

@interface TSPSupportPackageReadCoordinator : TSPPackageReadCoordinator {
    TSPPackage *_documentPackage;
    TSPPackageReadCoordinator *_documentPackageReadCoordinator;
    NSObject<OS_dispatch_queue> *_documentComponentReadQueue;
}




-(BOOL)endReading;
-(NSInteger)metadataObjectIdentifier;
-(id)externalObjectForIdentifier:(NSInteger)arg0 componentIdentifier:(NSInteger)arg1 isReadFinished:(BOOL)arg2 ;
-(id)initWithContext:(id)arg0 package:(id)arg1 packageURL:(id)arg2 finalizeHandlerQueue:(id)arg3 areExternalDataReferencesAllowed:(BOOL)arg4 skipDocumentUpgrade:(BOOL)arg5 documentLoadValidationPolicy:(id)arg6 ;
-(id)initWithContext:(id)arg0 package:(id)arg1 packageURL:(id)arg2 finalizeHandlerQueue:(id)arg3 areExternalDataReferencesAllowed:(BOOL)arg4 skipDocumentUpgrade:(BOOL)arg5 documentLoadValidationPolicy:(id)arg6 documentPackage:(id)arg7 ;
-(void)prepareToReadComponentWithIdentifier:(NSInteger)arg0 forObjectIdentifier:(NSInteger)arg1 isWeakReference:(BOOL)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)setDocumentPackageReadCoordinator:(id)arg0 ;


@end


#endif