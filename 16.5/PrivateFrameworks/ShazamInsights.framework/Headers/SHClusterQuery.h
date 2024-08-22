// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCLUSTERQUERY_H
#define SHCLUSTERQUERY_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface SHClusterQuery : NSObject

@property (readonly, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (readonly, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)artistsCluster;
+(id)clusterForType:(NSInteger)arg0 ;
+(id)tracksCluster;
-(id)initWithType:(NSInteger)arg0 sourceURL:(id)arg1 destinationURL:(id)arg2 ;
-(void)controllerForType:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)filterMediaItemQueryCollection:(id)arg0 bySeedCollection:(id)arg1 completionHandler:(id)arg2 ;
-(void)mediaItemsMatchingValuesInCollection:(id)arg0 completionHandler:(id)arg1 ;
-(void)mediaItemsWithHighCohesionToValue:(id)arg0 forProperty:(id)arg1 completionHandler:(id)arg2 ;
-(void)statusWithCompletionHandler:(id)arg0 ;


@end


#endif