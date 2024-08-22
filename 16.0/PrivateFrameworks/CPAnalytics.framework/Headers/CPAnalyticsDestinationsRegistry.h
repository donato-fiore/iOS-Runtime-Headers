// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPANALYTICSDESTINATIONSREGISTRY_H
#define CPANALYTICSDESTINATIONSREGISTRY_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray *_destinations;
}


@property (readonly, nonatomic) NSArray *destinations;


-(id)_destinationClassMap;
-(id)_readConfiguration:(id)arg0 ;
-(id)init;
-(void)_parseDestinationsFromConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)addDestination:(id)arg0 ;
-(void)removeDestination:(id)arg0 ;
-(void)removePhotoLibraryFromDestinations;
-(void)sendToAllDestinations:(id)arg0 ;
-(void)setupWithConfigurationAtURL:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)updateWithConfigurationAtURL:(id)arg0 cpAnalyticsInstance:(id)arg1 ;


@end


#endif