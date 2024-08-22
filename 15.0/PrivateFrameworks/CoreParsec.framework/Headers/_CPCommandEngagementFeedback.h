// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPCOMMANDENGAGEMENTFEEDBACK_H
#define _CPCOMMANDENGAGEMENTFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPCommandEngagementFeedback, NSSecureCoding;


#import "_CPSearchResultForFeedback.h"

@interface _CPCommandEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPCommandEngagementFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (copy, nonatomic) NSString *cardSectionId; // ivar: _cardSectionId
@property (copy, nonatomic) NSString *commandDetail; // ivar: _commandDetail
@property (nonatomic) int commandType; // ivar: _commandType
@property (nonatomic) int contactActionType; // ivar: _contactActionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisplayHandleOptions; // ivar: _didDisplayHandleOptions
@property (nonatomic) BOOL didSelectFromOptionsMenu; // ivar: _didSelectFromOptionsMenu
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _CPSearchResultForFeedback *result; // ivar: _result
@property (copy, nonatomic) NSString *resultSectionId; // ivar: _resultSectionId
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) int triggerEvent; // ivar: _triggerEvent
@property (nonatomic) NSUInteger uniqueButtonId; // ivar: _uniqueButtonId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif