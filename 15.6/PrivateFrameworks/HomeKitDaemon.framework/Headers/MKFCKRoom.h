// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFCKROOM_H
#define MKFCKROOM_H

@class NSSet, NSDictionary, NSUUID, NSString, NSDate;


#import "MKFCKHomeObject.h"
#import "MKFCKHome.h"
#import "MKFCKZone.h"

@interface MKFCKRoom : MKFCKHomeObject

@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSDictionary *applicationData;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKHome *homeDefault;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (retain, nonatomic) MKFCKZone *homeZone;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;


@end


#endif