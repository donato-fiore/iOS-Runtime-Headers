// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKTRIGGER_H
#define MKFCKTRIGGER_H

@class NSString, NSUUID, NSArray, NSSet, NSDate;


#import "MKFCKHomeObject.h"
#import "MKFCKHome.h"

@interface MKFCKTrigger : MKFCKHomeObject

@property (nonatomic) BOOL autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL executeOnce;
@property (retain, nonatomic) MKFCKHome *home;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *recurrences;
@property (retain, nonatomic) NSSet *scenes;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;


@end


#endif