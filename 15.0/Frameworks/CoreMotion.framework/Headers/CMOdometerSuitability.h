// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMODOMETERSUITABILITY_H
#define CMODOMETERSUITABILITY_H

@class NSString, NSDate;
@protocol SRSampling, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMOdometerSuitability : NSObject <SRSampling, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) BOOL suitableForRunning; // ivar: _suitableForRunning
@property (readonly, nonatomic) BOOL suitableForWalking; // ivar: _suitableForWalking
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 suitableForRunning:(BOOL)arg1 suitableForWalking:(BOOL)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif