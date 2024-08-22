// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOUSERSESSIONENTITY_H
#define GEOUSERSESSIONENTITY_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GEOUserSessionEntity : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) CGFloat sessionCreationTime; // ivar: _sessionCreationTime
@property (readonly, nonatomic) NSString *sessionEntityString;
@property (readonly, nonatomic) GEOSessionID sessionID; // ivar: _sessionID
@property (readonly, nonatomic) NSNumber *sessionIDHigh;
@property (readonly, nonatomic) NSString *sessionIDHighString;
@property (readonly, nonatomic) NSNumber *sessionIDLow;
@property (readonly, nonatomic) NSString *sessionIDLowString;
@property (readonly, nonatomic) NSString *sessionIDString;
@property (readonly, nonatomic) CGFloat sessionRelativeTimestamp; // ivar: _sessionRelativeTimestamp
@property (readonly, nonatomic) NSString *sessionUUIDString;


-(BOOL)_isValidSessionIDHighOrLowString:(id)arg0 ;
-(CGFloat)sessionRelativeTimestampForEventTime:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSessionEntityString:(id)arg0 ;
-(id)initWithSessionID:(struct GEOSessionID )arg0 sessionCreationTime:(CGFloat)arg1 sequenceNumber:(unsigned int)arg2 ;
-(void)updateSessionIDFromUUIDString:(id)arg0 ;
-(void)updateWithSessionEntityString:(id)arg0 ;


@end


#endif