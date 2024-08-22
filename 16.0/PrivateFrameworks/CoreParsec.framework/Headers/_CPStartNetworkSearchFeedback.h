// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPSTARTNETWORKSEARCHFEEDBACK_H
#define _CPSTARTNETWORKSEARCHFEEDBACK_H

@class PBCodable, NSData, NSString, NSDictionary;
@protocol _CPProcessableFeedback, _CPFeedbackUUID, _CPStartFeedback, _CPStartNetworkSearchFeedback, NSSecureCoding;



@interface _CPStartNetworkSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPStartFeedback, _CPStartNetworkSearchFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (copy, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (nonatomic) NSUInteger compressedRequestSize; // ivar: _compressedRequestSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) int endpoint; // ivar: _endpoint
@property (readonly, nonatomic) int endpointType;
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *headers; // ivar: _headers
@property (copy, nonatomic) NSString *input; // ivar: _input
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int lookupSelectionType; // ivar: _lookupSelectionType
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (nonatomic) NSUInteger rawRequestSize; // ivar: _rawRequestSize
@property (nonatomic) int searchType; // ivar: _searchType
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (copy, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (nonatomic) int triggerEvent; // ivar: _triggerEvent
@property (copy, nonatomic) NSString *url; // ivar: _url
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSUInteger whichTrigger; // ivar: _whichTrigger


+(id)startSearchFeedbackWithUUID;
-(BOOL)getHeaders:(*id)arg0 forKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(void)clearTrigger;
-(void)writeTo:(id)arg0 ;


@end


#endif