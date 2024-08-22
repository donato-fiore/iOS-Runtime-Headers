// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBLOCALSQLCONTEXTROWZONE_H
#define HMBLOCALSQLCONTEXTROWZONE_H

@class HMFObject, NSUUID;
@protocol HMBLocalZoneID;



@interface HMBLocalSQLContextRowZone : HMFObject

@property (retain, nonatomic) NSObject<HMBLocalZoneID> *identifier; // ivar: _identifier
@property (retain, nonatomic) NSUUID *replication; // ivar: _replication
@property (nonatomic) NSUInteger zoneRow; // ivar: _zoneRow


-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithZoneRow:(NSUInteger)arg0 ;
-(id)initWithZoneRow:(NSUInteger)arg0 name:(id)arg1 token:(id)arg2 ;


@end


#endif