// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSYNCMANAGEDSERVEREVALUATIONSTATUS_H
#define MAPSSYNCMANAGEDSERVEREVALUATIONSTATUS_H

@class NSManagedObject, NSDate, NSUUID;



@interface MapsSyncManagedServerEvaluationStatus : NSManagedObject

@property (nonatomic) BOOL arpStatus;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic) BOOL rapStatus;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif