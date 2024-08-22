// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHLOUVAINCLUSTERIMPORT_H
#define SHLOUVAINCLUSTERIMPORT_H


#import <Foundation/Foundation.h>

#import "SHLouvainClusterDataStore.h"

@interface SHLouvainClusterImport : NSObject

@property (readonly, nonatomic) SHLouvainClusterDataStore *dataStore; // ivar: _dataStore


-(BOOL)loadClustersFromDataURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadClustersLineByLineFromDataURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithDataStore:(id)arg0 ;
-(void)importClustersToModelObjects:(id)arg0 cluster:(id)arg1 importClusters:(id)arg2 ;


@end


#endif