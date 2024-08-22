// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPAVTELEVISIONROUTE_H
#define MPAVTELEVISIONROUTE_H



#import "MPAVRoute.h"
#import "MPAVRouteConnection.h"

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}


@property (readonly, nonatomic) *void television; // ivar: _television


-(NSInteger)routeSubtype;
-(NSInteger)routeType;
-(id)connection;
-(id)initWithTelevision:(*void)arg0 ;
-(id)routeUID;
-(void)dealloc;


@end


#endif