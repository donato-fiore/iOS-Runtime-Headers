// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC22MAPSSYNCINCIDENTREPORT_H
#define _TTC8MAPSSYNC22MAPSSYNCINCIDENTREPORT_H

@class TtC8MapsSync16MapsSyncBaseItem, NSString;



@interface _TtC8MapsSync22MapsSyncIncidentReport : TtC8MapsSync16MapsSyncBaseItem {
    ? _countryCode;
    ? _type;
}


@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) short type;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif