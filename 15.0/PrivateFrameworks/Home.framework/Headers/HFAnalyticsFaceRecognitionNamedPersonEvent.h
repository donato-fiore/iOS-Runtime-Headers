// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFANALYTICSFACERECOGNITIONNAMEDPERSONEVENT_H
#define HFANALYTICSFACERECOGNITIONNAMEDPERSONEVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsFaceRecognitionNamedPersonEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (retain, nonatomic) NSNumber *isNewPerson; // ivar: _isNewPerson
@property (retain, nonatomic) NSNumber *personType; // ivar: _personType


-(NSUInteger)_namedPersonTypeForPerson:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif