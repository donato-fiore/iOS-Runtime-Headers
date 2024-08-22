// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSYNCMANAGEDINCIDENTREPORT_H
#define MAPSSYNCMANAGEDINCIDENTREPORT_H

@class NSManagedObject, NSString, NSDate, NSUUID;



@interface MapsSyncManagedIncidentReport : NSManagedObject

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic) short type;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif