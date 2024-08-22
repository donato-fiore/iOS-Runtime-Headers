// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCCAREPORTER_H
#define BCCAREPORTER_H

@class PBBridgeCAReporter;



@interface BCCAReporter : PBBridgeCAReporter



+(NSUInteger)routeType;
+(id)descriptionForDiscoverSuccessType:(NSUInteger)arg0 ;
+(id)discoverRouteDescription;
+(void)incrementDiscoverSuccessType:(NSUInteger)arg0 ;
+(void)setRouteType:(NSUInteger)arg0 ;


@end


#endif