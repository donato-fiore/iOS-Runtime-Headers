// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTHROTTLE_H
#define CKTHROTTLE_H

@class NSString, NSDate, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKThrottle : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger allowedRequestCount; // ivar: _allowedRequestCount
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (nonatomic) NSUInteger currentRequestWindowIndex; // ivar: _currentRequestWindowIndex
@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSString *functionName; // ivar: _functionName
@property (nonatomic) NSUInteger intervalLengthSeconds; // ivar: _intervalLengthSeconds
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *operationGroupNamePrefix; // ivar: _operationGroupNamePrefix
@property (nonatomic) int operationType; // ivar: _operationType
@property (nonatomic) NSUInteger repeatEverySeconds; // ivar: _repeatEverySeconds
@property (copy, nonatomic) NSNumber *rowID; // ivar: _rowID
@property (nonatomic) NSUInteger sentRequestCount; // ivar: _sentRequestCount
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSDate *throttleStartDate; // ivar: _throttleStartDate
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName


+(BOOL)supportsSecureCoding;
-(BOOL)appliesToCriteria:(id)arg0 ;
-(BOOL)canTestInClientProcess;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExpired;
-(CGFloat)delayUntilNextOperationAllowed;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationForJSON:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSqliteRepresentation:(id)arg0 ;
-(id)sqliteRepresentation;
-(id)throttleBlockingUntilNextRequestWindow;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementSentRequestCount;


@end


#endif