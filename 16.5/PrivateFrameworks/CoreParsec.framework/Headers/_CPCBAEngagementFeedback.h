// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPCBAENGAGEMENTFEEDBACK_H
#define _CPCBAENGAGEMENTFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPCBAEngagementFeedback, NSSecureCoding;



@interface _CPCBAEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPCBAEngagementFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (nonatomic) int cbaType; // ivar: _cbaType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger queryId; // ivar: _queryId
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (copy, nonatomic) NSString *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(void)writeTo:(id)arg0 ;


@end


#endif