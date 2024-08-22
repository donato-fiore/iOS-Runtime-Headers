// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC34MAPSSYNCMUTABLEANONYMOUSCREDENTIAL_H
#define _TTC8MAPSSYNC34MAPSSYNCMUTABLEANONYMOUSCREDENTIAL_H

@class TtC8MapsSync23MapsSyncMutableBaseItem, NSData, NSDate;



@interface _TtC8MapsSync34MapsSyncMutableAnonymousCredential : TtC8MapsSync23MapsSyncMutableBaseItem {
    ? _proxyObject;
}


@property (nonatomic, copy) NSData *anonymousId;
@property (nonatomic, copy) NSData *mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt;
@property (nonatomic) NSUInteger mapsTokenTTL;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif