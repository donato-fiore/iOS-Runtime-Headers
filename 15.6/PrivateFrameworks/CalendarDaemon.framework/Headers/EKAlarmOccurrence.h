// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKALARMOCCURRENCE_H
#define EKALARMOCCURRENCE_H

@class NSDate, CADObjectID, NSString, NSTimeZone, NSURL;

#import <Foundation/Foundation.h>


@interface EKAlarmOccurrence : NSObject

@property (readonly, nonatomic) NSDate *acknowledgedDate; // ivar: _acknowledgedDate
@property (readonly, nonatomic) CADObjectID *alarmID; // ivar: _alarmID
@property (readonly, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (readonly, nonatomic) NSDate *ownerDate; // ivar: _ownerDate
@property (readonly, nonatomic) CADObjectID *ownerID; // ivar: _ownerID
@property (readonly, nonatomic) NSTimeZone *ownerTimeZone; // ivar: _ownerTimeZone
@property (readonly, nonatomic) NSURL *ownerURI; // ivar: _ownerURI


+(id)alarmOccurrenceWithAlarmID:(id)arg0 ownerID:(id)arg1 ownerDate:(id)arg2 ownerTimeZone:(id)arg3 ownerURI:(id)arg4 fireDate:(id)arg5 externalID:(id)arg6 acknowledgedDate:(id)arg7 ;
-(id)dictionaryRepresentation;
-(id)initWithAlarmID:(id)arg0 ownerID:(id)arg1 ownerDate:(id)arg2 ownerTimeZone:(id)arg3 ownerURI:(id)arg4 fireDate:(id)arg5 externalID:(id)arg6 acknowledgedDate:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif