// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8MAPSSYNC27MAPSSYNCANALYTICSIDENTIFIER_H
#define _TTC8MAPSSYNC27MAPSSYNCANALYTICSIDENTIFIER_H

@class TtC8MapsSync16MapsSyncBaseItem, NSData;



@interface _TtC8MapsSync27MapsSyncAnalyticsIdentifier : TtC8MapsSync16MapsSyncBaseItem {
    ? _data;
}


@property (nonatomic, readonly) NSData *data;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif