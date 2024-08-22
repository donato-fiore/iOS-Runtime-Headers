// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATACOLLECTORSENSORDATUM_H
#define HDDATACOLLECTORSENSORDATUM_H

@class NSUUID, NSDateInterval, NSData, NSString;
@protocol HDCollectedSensorDatum;

#import <Foundation/Foundation.h>


@interface HDDataCollectorSensorDatum : NSObject <HDCollectedSensorDatum>

 {
    NSUUID *_datumIdentifier;
    NSDateInterval *_dateInterval;
    NSData *_resumeContext;
}


@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSUUID *datumIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *resumeContext;
@property (readonly, copy, nonatomic) id *resumeContextProvider; // ivar: _resumeContextProvider
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dateInterval:(id)arg1 resumeContext:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 dateInterval:(id)arg1 resumeContextProvider:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif