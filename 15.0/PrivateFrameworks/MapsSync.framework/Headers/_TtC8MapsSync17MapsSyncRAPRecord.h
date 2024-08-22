// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC17MAPSSYNCRAPRECORD_H
#define _TTC8MAPSSYNC17MAPSSYNCRAPRECORD_H

@class TtC8MapsSync16MapsSyncBaseItem, NSData, NSString, NSDate;



@interface _TtC8MapsSync17MapsSyncRAPRecord : TtC8MapsSync16MapsSyncBaseItem {
    ? _countryCode;
    ? _type;
    ? _summary;
    ? _reportId;
    ? _status;
    ? _statusLastUpdatedDate;
    ? _contentData;
}


@property (nonatomic, readonly) NSData *contentData;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *reportId;
@property (nonatomic, readonly) short status;
@property (nonatomic, readonly) NSDate *statusLastUpdatedDate;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) short type;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif