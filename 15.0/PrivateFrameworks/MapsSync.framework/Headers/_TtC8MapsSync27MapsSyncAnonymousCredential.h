// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC27MAPSSYNCANONYMOUSCREDENTIAL_H
#define _TTC8MAPSSYNC27MAPSSYNCANONYMOUSCREDENTIAL_H

@class TtC8MapsSync16MapsSyncBaseItem, NSSet, NSData, NSString, NSDate;



@interface _TtC8MapsSync27MapsSyncAnonymousCredential : TtC8MapsSync16MapsSyncBaseItem {
    ? _anonymousId;
    ? _mapsToken;
    ? _mapsTokenCreatedAt;
    ? _mapsTokenTTL;
    ? _reviewedPlaces;
    ? _reviewedPlacesUnstored;
}


@property (nonatomic, copy) NSSet *_reviewedPlacesUnstored;
@property (nonatomic, readonly) NSData *anonymousId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *mapsToken;
@property (nonatomic, readonly) NSDate *mapsTokenCreatedAt;
@property (nonatomic, readonly) NSUInteger mapsTokenTTL;
@property (nonatomic, readonly) NSSet *reviewedPlaces;


+(id)fetchLatestAnonymousCredential;
+(id)fetchWithAnonymousId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)executeOnFirstSave:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif