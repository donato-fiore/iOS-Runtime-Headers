// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSREGISTRATIONCONTROLCHOSENMETRIC_H
#define IDSREGISTRATIONCONTROLCHOSENMETRIC_H

@class PBCodable<NSCopying>, NSString;
@protocol CUTAWDMetric;

#import <Foundation/Foundation.h>


@interface IDSRegistrationControlChosenMetric : NSObject <CUTAWDMetric>



@property (readonly) unsigned int awdIdentifier;
@property (readonly) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInterestingRegion; // ivar: _isInterestingRegion
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSInteger registrationControlStatus; // ivar: _registrationControlStatus
@property (readonly, nonatomic) NSInteger registrationType; // ivar: _registrationType
@property (readonly) Class superclass;


-(id)initWithRegistrationType:(NSInteger)arg0 registrationControlStatus:(NSInteger)arg1 isInterestingRegion:(BOOL)arg2 ;


@end


#endif