// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPUSERREPORTFEEDBACK_H
#define _CPUSERREPORTFEEDBACK_H

@class PBCodable, NSString, NSData, NSArray;
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
@property (nonatomic) int reportType; // ivar: _reportType
@property (retain, nonatomic) _CPSearchResultForFeedback *result; // ivar: _result
@property (copy, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (copy, nonatomic) NSString *uploadedDataIdentifier; // ivar: _uploadedDataIdentifier
@property (retain, nonatomic) _CPPunchoutForFeedback *userSelection; // ivar: _userSelection
@property (copy, nonatomic) NSData *uuidBytes; // ivar: _uuidBytes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(id)sectionsAtIndex:(NSUInteger)arg0 ;
-(void)addSections:(id)arg0 ;
-(void)clearSections;
-(void)writeTo:(id)arg0 ;


@end


#endif