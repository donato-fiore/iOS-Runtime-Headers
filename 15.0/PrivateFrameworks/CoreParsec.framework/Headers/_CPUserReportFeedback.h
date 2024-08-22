// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPUSERREPORTFEEDBACK_H
#define _CPUSERREPORTFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPUserReportFeedback, NSSecureCoding;


#import "_CPCardSectionForFeedback.h"
#import "_CPSearchResultForFeedback.h"
#import "_CPPunchoutForFeedback.h"

@interface _CPUserReportFeedback : PBCodable <_CPProcessableFeedback, _CPUserReportFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (retain, nonatomic) _CPCardSectionForFeedback *cardSection; // ivar: _cardSection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _CPSearchResultForFeedback *result; // ivar: _result
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (retain, nonatomic) _CPPunchoutForFeedback *userSelection; // ivar: _userSelection
@property (copy, nonatomic) NSData *uuidBytes; // ivar: _uuidBytes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif