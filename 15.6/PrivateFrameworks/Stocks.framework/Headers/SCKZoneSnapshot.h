// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCKZONESNAPSHOT_H
#define SCKZONESNAPSHOT_H

@class NSArray;
@protocol SCKZoneReading;

#import <Foundation/Foundation.h>

#import "SCKZoneSchema.h"

@interface SCKZoneSnapshot : NSObject <SCKZoneReading>



@property (readonly, copy, nonatomic) NSArray *allRecords;
@property (copy, nonatomic) NSArray *records; // ivar: _records
@property (retain, nonatomic) SCKZoneSchema *zoneSchema; // ivar: _zoneSchema


-(BOOL)isEqualToSnapshot:(id)arg0 ;
-(id)descriptionOfContents;
-(id)initWithZoneSchema:(id)arg0 records:(id)arg1 ;
-(id)recordOfType:(id)arg0 ;
-(id)recordOfType:(id)arg0 passingTest:(id)arg1 ;
-(id)recordWithName:(id)arg0 ;
-(id)recordsOfType:(id)arg0 ;


@end


#endif