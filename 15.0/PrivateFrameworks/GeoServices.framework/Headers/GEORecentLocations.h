// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORECENTLOCATIONS_H
#define GEORECENTLOCATIONS_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface GEORecentLocations : NSObject {
    NSXPCConnection *_connection;
}




-(id)init;
-(void)requestRecentLocationsWithResponse:(id)arg0 ;


@end


#endif