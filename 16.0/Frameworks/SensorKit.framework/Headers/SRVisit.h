// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRVISIT_H
#define SRVISIT_H

@class NSDateInterval, NSString, NSUUID;
@protocol SRSampleExporting, NSSecureCoding, SRSampling;

#import <Foundation/Foundation.h>


@interface SRVisit : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>



@property (readonly) NSDateInterval *arrivalDateInterval; // ivar: _arrivalDateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDateInterval *departureDateInterval; // ivar: _departureDateInterval
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat distanceFromHome; // ivar: _distanceFromHome
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *label;
@property (readonly) NSInteger locationCategory; // ivar: _locationCategory
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDistanceFromHome:(CGFloat)arg0 arrive:(id)arg1 depart:(id)arg2 category:(NSInteger)arg3 uuid:(id)arg4 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif