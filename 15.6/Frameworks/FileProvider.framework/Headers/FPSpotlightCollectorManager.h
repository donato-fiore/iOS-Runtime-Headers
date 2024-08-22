// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPSPOTLIGHTCOLLECTORMANAGER_H
#define FPSPOTLIGHTCOLLECTORMANAGER_H

@class NSMutableDictionary, NSArray, NSSet;
@protocol FPSpotlightCollectorDelegate;

#import <Foundation/Foundation.h>


@interface FPSpotlightCollectorManager : NSObject <FPSpotlightCollectorDelegate>



@property BOOL areMountQueriesEnabled; // ivar: _areMountQueriesEnabled
@property (retain) NSMutableDictionary *collectorByDescriptor; // ivar: _collectorByDescriptor
@property (readonly, nonatomic) NSArray *collectors;
@property (retain) NSSet *currentMountPoints; // ivar: _currentMountPoints
@property (readonly) NSSet *effectiveCurrentMountPoints;
@property (retain) id *providerDomainChangesToken; // ivar: _providerDomainChangesToken


+(id)_mountPointsFromProviderDomains:(id)arg0 ;
+(id)sharedInstance;
-(id)_recursiveDescription;
-(id)init;
-(id)mountPointsForCollector:(id)arg0 ;
-(void)_observeFileProviderDomains;
-(void)collectorDidFinish:(id)arg0 ;
-(void)dealloc;
-(void)disableMountPointQueries;
-(void)enableMountPointQueries;
-(void)registerDataSource:(id)arg0 ;
-(void)resumeCollectors;
-(void)suspendCollectors;
-(void)unregisterDataSource:(id)arg0 ;


@end


#endif