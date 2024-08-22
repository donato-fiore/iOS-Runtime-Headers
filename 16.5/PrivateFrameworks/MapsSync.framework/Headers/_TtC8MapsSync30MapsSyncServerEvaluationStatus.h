// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC30MAPSSYNCSERVEREVALUATIONSTATUS_H
#define _TTC8MAPSSYNC30MAPSSYNCSERVEREVALUATIONSTATUS_H

@class TtC8MapsSync16MapsSyncBaseItem, NSString;



@interface _TtC8MapsSync30MapsSyncServerEvaluationStatus : TtC8MapsSync16MapsSyncBaseItem {
    ? _arpStatus;
    ? _rapStatus;
}


@property (nonatomic, readonly) BOOL arpStatus;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL rapStatus;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif