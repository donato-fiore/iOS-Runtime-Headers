// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC31MAPSSYNCHISTORYEVDIRECTIONSITEM_H
#define _TTC8MAPSSYNC31MAPSSYNCHISTORYEVDIRECTIONSITEM_H

@class TtC8MapsSync29MapsSyncHistoryDirectionsItem, NSString;



@interface _TtC8MapsSync31MapsSyncHistoryEvDirectionsItem : TtC8MapsSync29MapsSyncHistoryDirectionsItem {
    ? _requiredCharge;
    ? _vehicleIdentifier;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) CGFloat requiredCharge;
@property (nonatomic, readonly) NSString *vehicleIdentifier;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif