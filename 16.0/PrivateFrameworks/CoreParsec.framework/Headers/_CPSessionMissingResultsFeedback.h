// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPSESSIONMISSINGRESULTSFEEDBACK_H
#define _CPSESSIONMISSINGRESULTSFEEDBACK_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _CPProcessableFeedback, _CPSessionMissingResultsFeedback, NSSecureCoding;



@interface _CPSessionMissingResultsFeedback : PBCodable <_CPProcessableFeedback, _CPSessionMissingResultsFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *results; // ivar: _results
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)resultsAtIndex:(NSUInteger)arg0 ;
-(void)addResults:(id)arg0 ;
-(void)clearResults;
-(void)writeTo:(id)arg0 ;


@end


#endif